#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "hello world" << endl;
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
    {
        cin >> vec[i];
    }
    
    int v;
    cin >> v;

    int num = 0;
    for(auto i : vec){
        if(v == i){
            num++;
        }
    }

    cout << num;
    return 0;
}