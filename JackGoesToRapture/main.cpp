#include <bits/stdc++.h>
#include <vector>
#include <array>

using namespace std;



int main()
{
    int g_nodes;
    int g_edges;

    cin >> g_nodes >> g_edges;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> g_from(g_edges);
    vector<int> g_to(g_edges);
    vector<int> g_weight(g_edges);

    for (int i = 0; i < g_edges; i++) {
        cin >> g_from[i] >> g_to[i] >> g_weight[i];
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    std::array<std::array<int, size1>, size1> adjancey_matrix;



    return 0;
}