#include <iostream>

using namespace std;

int main(){
    char* S = "123";
    int num = 0;
    // アスキーコードを引き算して数値を取り出す
    // 1:49 0:48 '1' - '0' = 49 - 48 = 1
    num += S[0] - '0';
    cout << (int)S[0] << endl;
    cout << (int)'0' << endl;
    cout << num << endl;
    return 0;
}