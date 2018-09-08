#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


bool solution(string &word, string &sub_word){
    sort(word.begin(), word.end());
    sort(sub_word.begin(), sub_word.end());

    if (word.compare(sub_word) == 0)
        return true;
    else return false;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    string string1("mary");
    string string2("army");

    cout << solution(string1, string2) << endl;

    string1 = "ccc";
    string2 = "ccccccc";

    cout << solution(string1, string2) << endl;


    return 0;
}