#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> vec(N);

    for (int i = 0; i < N; i++)
    {
        cin >> vec[i];
    }

    int count = 0;
    int ans = 0;

    while (true)
    {
        for (int i = 0; i < N; i++)
        {
            if (vec[i] % 2 == 0)
            {
                count++;
            }
            vec[i] /= 2;
        }
        if (count == N)
        {
            ans++;
            count = 0;
        }
        else
        {
            break;
        }
    }

    cout << ans;
    return 0;
}