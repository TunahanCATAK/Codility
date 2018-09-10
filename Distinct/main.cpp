#include <iostream>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> &A) {

    map<int, int> hm;
    for (auto i: A){
        hm.insert(pair<int,int>(i, i));
    }

    return hm.size();
}

int main() {
    std::cout << "Hello, World!" << std::endl;


    vector<int> A = {2, 1, 1, 2, 3, 1, 4};

    int count = solution(A);
    cout << count;

    return 0;
}