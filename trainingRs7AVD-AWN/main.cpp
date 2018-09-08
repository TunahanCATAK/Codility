#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int solution(vector<int> &A){

    if (A.size() <= 1)
        return 0;

    int indicator = 0;
    int count = 0;
    int item_count = 0;

    for (int i = 0; i < A.size(); i++){
        if (A.at(i) != indicator)
            continue;
        else{
            count = count - (1*item_count++);
            count += A.size() - (i + 1);
        }
    }

    if (count > 1000000000 || count < -1)
        count = -1;
    return count;

}

int main() {

    vector<int> A = {0, 1, 0, 1, 1};

    int count = solution(A);
    cout << count << endl;

    return 0;
}