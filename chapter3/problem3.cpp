#include <iostream>
#include <vector>

using namespace std;

const int INF = 20000000;
int main()
{
    int N;
    cin >> N;
    if (N < 2)
    {
        cout << "2以上の数値を入力してください" << endl;
        return 0;
    }
    vector<int> vec(N);

    for (int i = 0; i < N; i++)
    {
        cin >> vec[i];
    }

    int min = INF;
    int min2 = INF;

    for (auto i : vec)
    {
        if (i < min)
        {
            min = i;
            min2 = min;
        }
        else if (i < min2)
        {
            min2 = i;
        }
    }

    cout << min2 << endl;
    return 0;
}