#include <iostream>
#include <vector>

using namespace std;

int solution(int A, int B, int K) {
    if (K > B || K < A){
        return 0;
    }

    return ((B-A)/K) + 1;
}

int main() {

    int tmp = solution(10, 10, 5);
    cout << tmp;
    return 0;
}