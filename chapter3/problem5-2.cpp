#include <iostream>
#include <vector>

using namespace std;

int how_many_times(int N){
    int exp = 0;
    while(N % 2 == 0) N /= 2,exp++;
    return exp;
}

const int INF = 1234567890;

int main()
{
    int N;
    cin >> N;
    vector<int> vec(N);

    for (int i = 0; i < N; i++)
    {
        cin >> vec[i];
    }
    
    int result = INF;
    for(auto i : vec){
        result = min(result, how_many_times(i));
    }
    cout << result << endl;
    
    return 0;
}