#include <iostream>
#include <vector>
#include <sstream>

std::vector<float> solution(std::vector<int> &A){
    for
}

int main() {

    std::string line;
    while(getline(std::cin, line)){
        std::istringstream iss(line);
        std::vector<int> A;
        while(!iss.eof()){
            int tmp;
            iss >> tmp;
            A.push_back(tmp);
        }

        std::vector<float> result = solution(A);
        for (auto i: result){
            std::cout << i << " ";
        }
        std::cout << "\n";

    }

    return 0;
}