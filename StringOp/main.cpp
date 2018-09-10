#include <iostream>
#include <string>
#include <stack>
#include <sstream>


using namespace std;


int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)

    stack<unsigned int> wordMachine;
    std::istringstream iss(S);

    if (S.size() == 0){
        return -1;
    }

    while(!iss.eof()){
        string op;
        iss >> op;

        if (op == "DUP"){
            unsigned int val = wordMachine.top();
            wordMachine.push(val);
        } else if(op == "POP"){
            wordMachine.pop();
        } else if (op == "+"){
            unsigned int val1, val2;
            unsigned int result;
            if (!wordMachine.empty()){
                val1 = wordMachine.top();
                wordMachine.pop();

                if (!wordMachine.empty()){
                    val2 = wordMachine.top();
                    wordMachine.pop();
                    result = val1 + val2;
                    if (result < val1)
                        return -1;
                    else
                        wordMachine.push(val1 + val2);
                }
                else
                    return -1;
            }
            else
                return -1;
        }else if (op == "-"){
            unsigned int val1, val2;
            unsigned int result;

            if (!wordMachine.empty()){
                val1 = wordMachine.top();
                wordMachine.pop();
                if (!wordMachine.empty()){
                    val2 = wordMachine.top();
                    wordMachine.pop();

                    result = val1 - val2;
                    if (result > val1)
                        return -1;
                    else
                        wordMachine.push(val1 - val2);
                }
                else return -1;
            }
            else return -1;
        }else{ //number case
            wordMachine.push(stoi(op));
        }

    }

    return wordMachine.top();
}

int main() {
    string str = "13 DUP 4 POP 5 DUP + DUP + -";
//    string str = "3 DUP 5 - -";
// string str = "5 6 + -";
//    string str = "";
    int res = solution(str);

    cout << res;

    return 0;
}