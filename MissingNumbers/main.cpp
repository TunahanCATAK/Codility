#include <iostream>
#include <algorithm>

int solution(int A[], int N) {

    for (int i = 0; i < N; i++){

        if (A[i] == i+1)
            continue;
        else if (A[i] > N || A[i] <= 0){
            A[i] = -1;
            // print_(A, N);
        }
        else{
            if (A[i] != A[A[i]-1])
            {
                int tmp = A[i];
                A[i] = A[A[i]-1];
                A[tmp-1] = tmp;
                // print_(A,N);
                i--;
            }

        }
    }

    for (int i = 0; i < N; i++){
        if (A[i] != i+1){
            return i+1;
        }
    }

    return N+1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    int A[199];
    int count = 1;
    for (int i = 0; i < 200; i++){
        if (i != 101){
            A[i] = count++;
        }
        else count++;
    }

    std::cout << solution(A, 199);

    return 0;
}