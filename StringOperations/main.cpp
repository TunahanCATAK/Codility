#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include <algorithm>
#include <numeric>

struct MapInfo {
    std::string region;
    int part;
    int size;
};

struct node
{
    MapInfo mi;
    struct node *left, *right;
};


node* newNode(MapInfo mi)
{
    node* temp = new node;
    temp->mi = mi;
    temp->left = temp->right = NULL;
    return temp;
}

node* insert(node* node, MapInfo mi)
{
    if (node == NULL)
        return newNode(mi);

    if (mi.part < node->mi.part)
        node->left = insert(node->left, mi);
    else if (mi.part > node->mi.part)
        node->right = insert(node->right, mi);

    return node;
}

node* findGreaterThanLastDownloaded(node* node, int last_downloaded_part){

    if (node->left == NULL && node->right == NULL &&
        node->mi.part> last_downloaded_part)
        return NULL;

    if ((node->mi.part <= last_downloaded_part && node->right == NULL) ||
        (node->mi.part <= last_downloaded_part && node->right->mi.part > last_downloaded_part))
        return node;

    if (node->mi.part == last_downloaded_part)
        return node;

    if (node->mi.part < last_downloaded_part){
        return findGreaterThanLastDownloaded(node->right, last_downloaded_part);
    }
    else return findGreaterThanLastDownloaded(node->left, last_downloaded_part);
}

int result = 0;

void accumulate(struct node *node)
{
    if (node != NULL)
    {
        accumulate(node->left);
        result += node->mi.size;
        accumulate(node->right);
    }
}

int main() {
    std::string S = "Netherlands,1,25000\nNetherlands,2,3000\nNetherlands,3,1000";
    std::string T = "Belgium,1\nNetherlands,1";
    std::string U = "Netherlands";
    std::string line;
    std::vector<MapInfo> mapinfo;
    int last_downloaded_part = 0;

    size_t found = T.find(U);
    if(found != std::string::npos){
        std::string part = T.substr(found + U.size() + 1, 1);
        last_downloaded_part = std::stoi(part);
    }

    node* root = NULL;
    std::istringstream iss(S);

    while (getline(iss, line)) {
        MapInfo mapInfo;
        std::istringstream record(line);
        std::string token;
        std::getline(record, token, ',');
        mapInfo.region = token;
        std::getline(record, token, ',');
        mapInfo.part = std::stoi(token);
        std::getline(record, token, ',');
        mapInfo.size = std::stoi(token);

        root = insert(root, mapInfo);
    }

    node* unloaded_part = findGreaterThanLastDownloaded(root, last_downloaded_part);

    accumulate(unloaded_part->right);
    std::cout << result << std::endl;

    return 0;
}