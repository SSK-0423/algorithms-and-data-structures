#include <iostream>
#include <string>
using namespace std;

// 1 2 3 4 5
//  0 0 0 0
//  1 1 0 1

int main(){
    string S;
    cin >> S;

    // 初期値
    long long sum = 0;

    // 0-31
    for(int bit = 0; bit < (1 << S.size() - 1); bit++){
        //
        long long tmp = 0;
        for(int i = 0; i < S.size() - 1; i++){
            // 位合わせ
            tmp *= 10;
            tmp += S[i] - '0';

            if(bit & (1 << i)){
                sum += tmp;
                tmp = 0;
            }
        }

        tmp *= 10;
        tmp += S.back() - '0';
        sum += tmp;
    }
    cout << sum << endl;
    return 0;
}