#include <iostream>
#include <vector>

using namespace std;

const int INF = 20000000;
const int mINF = -INF;
int main()
{
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
    {
        cin >> vec[i];
    }
    //  最小値
    int min = INF;
    //  最大値
    int max = mINF;
    for (auto i : vec)
    {
        if (i < min)
        {
            min = i;
        }
        if (i > max)
        {
            max = i;
        }
    }
    cout << "最小値:" << min << endl;
    cout << "最大値:" << max << endl;
    //  差の最大値を求める
    int maxDis = abs(max - min);
    cout << maxDis << endl;

    return 0;
}