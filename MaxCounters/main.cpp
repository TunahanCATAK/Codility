#include <iostream>
#include <vector>
#include <array>

using namespace std;

vector<int> solution(int N, vector<int> &A){

    int max = 0;
    int cached_max = 0;
    int result[N] = {0};

    for (auto i: A){

        if (i > N){

            if (max > 0)
                cached_max = max;
        }
        else{
            if (cached_max > 0){
                if (result[i-1] < cached_max)
                    result[i-1] = cached_max + 1;
                else
                    result[i-1]++;

                if (result[i-1] > max)
                    max = result[i-1];
            }
            else{
                result[i-1]++;
                if (result[i-1] > max)
                    max = result[i-1];
            }

        }

    }

    for (int i = 0; i < N; i++){
        if (result[i] < cached_max)
            result[i] = cached_max;
    }

    return std::vector<int>(result, result + sizeof result / sizeof result[0]);

}

int main() {
    std::cout << "Hello, World!" << std::endl;

    vector<int> A = {3, 4, 4, 6, 1, 4, 4};
    int N = 5;

    vector<int> B = solution(N, A);
    for(auto i: B){
        cout << i << endl;
    }

    return 0;
}