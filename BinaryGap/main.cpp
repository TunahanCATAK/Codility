#include <iostream>


int solution(int N){

    int longest_gap = 0;
    int temp_gap = 0;
    bool open_close_flag = false;

    while (N >= 2){

        int mod = N % 2;
        if (mod == 1){
            if (open_close_flag){
                if (temp_gap > longest_gap)
                    longest_gap = temp_gap;

                temp_gap = 0;
            }
            else{
                open_close_flag = true;
            }

        }
        else{
            if (open_close_flag){
                temp_gap++;
            }
        }

        N = N / 2;
    }

    if (N == 1){
        if (temp_gap > longest_gap)
            longest_gap = temp_gap;
    }

    return longest_gap;

}


int main() {
    std::cout << "Hello, World!" << std::endl;


    solution(1041);

    return 0;
}