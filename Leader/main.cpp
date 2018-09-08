#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A){

    sort(A.begin(), A.end());
    int candidate = *A.begin();
    int count = 1;
    int max_cand;
    int max_count = 0;

    for (vector<int>::iterator it = A.begin()+1; it != A.end(); it++){
        if (*it == candidate){
            count++;
        }
        else{
            if (max_count < count){
                max_cand = candidate;
                max_count = count;
                count = 0;
                candidate = *it;
            }
        }
    }

    if (max_count < count){
        max_cand = candidate;
        max_count = count;
        count = 0;
    }

    return max_cand;

}


int main() {

    vector<int> A = {6, 8, 4, 6, 8, 6, 6};

    int cand = solution(A);
    cout << cand;

    return 0;
}