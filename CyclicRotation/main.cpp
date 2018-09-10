#include <iostream>
#include <vector>

using namespace std;


vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)

    if (A.empty())
        return A;

    for (int i = 0; i < K; i++){

        int tmp = *(A.end()-1);

        for (vector<int>::iterator it = A.end()-1; it > A.begin(); it--){
            *it = *(it-1);

        }
        *A.begin() = tmp;
    }

    return A;

}

int main() {
    std::cout << "Hello, World!" << std::endl;

    vector<int> A = {3, 4, 5, 6};
    vector<int> B = solution(A,2);

    return 0;
}