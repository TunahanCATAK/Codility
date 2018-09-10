#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
bool solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    vector<int> realA = A;
    vector<int> nonPairA;
    vector<int> nonPairRealA;


    sort(begin(A), end(A));

    if (A == realA)
        return true;

    for(int i = 0; i < A.size(); i++){
        if (A.at(i) != realA.at(i)){
            nonPairA.push_back(A.at(i));
            nonPairRealA.push_back(realA.at(i));
        }
    }

    if (nonPairA.size() > 2)
        return false;
    else{

        if (nonPairA.at(0) == nonPairRealA.at(1) && nonPairA.at(1) == nonPairRealA.at(0))
            return true;
        else
            return false;

    }


}


int main() {

    vector<int> A = {1,1,1,1,1, 5, 9, 12, 8, 7, 15, 19};

    cout << solution(A);

    return 0;
}