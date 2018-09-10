#include <iostream>
#include <vector>

using namespace std;

int solution(int K, vector<int> &C, vector<int> &D){

    int pair_count = 0;

    bool flag_erase;
    auto end = C.end();
    for (vector<int>::iterator it = C.begin(); it != end; ){
        flag_erase = false;
        for (vector<int>::iterator it2 = it + 1; it2 != end;){
            if (*it == *it2){
                it = C.erase(it);
                it2 = C.erase(it2);
                pair_count++;
                flag_erase = true;
                break;
            }else{
                it2++;
            }
        }
        if (!flag_erase)
            it++;
    }

    for (auto i: C){
        cout << i << endl;
    }
    cout << "pair: " << pair_count << endl;

    bool flg;

    for (vector<int>::iterator it = C.begin(); it != C.end(); ){
        flg = false;
        for (vector<int>::iterator it2 = D.begin(); it2 != D.end(); it2++){
            if (*it == *it2){
                it = C.erase(it);
                it2 = D.erase(it2);
                pair_count++;
                K--;
                flg = true;
                if (K == 0)
                    return pair_count;
                break;
            }
        }
        if (!flg){
            it++;
        }

    }

    if (K >= 2){
        for (vector<int>::iterator it = D.begin(); it != D.end(); it++){
            for (vector<int>::iterator it2 = it + 1; it2 != D.end(); it2++){
                if (*it == *it2){
                    D.erase(it);
                    D.erase(it2);
                    pair_count++;
                    K -= 2;
                    if (K == 0)
                        return pair_count;
                    break;
                }
            }
        }
    }


    return pair_count;

}



int main() {

    vector<int> C = {1, 2, 1, 1, 3, 3};
    vector<int> D = {1, 4, 3, 2, 4};
    int K = 3;

    int cnt = solution(K, C, D);

    cout << cnt;

    return 0;
}