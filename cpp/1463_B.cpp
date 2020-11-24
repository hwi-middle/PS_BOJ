//Bottom-Up ¹æ½Ä
#define MX 1000001
#include <bits/stdc++.h>
using namespace std;

int memo[MX];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

    memo[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        memo[i] = memo[i - 1] + 1;
        if (i % 2 == 0 && memo[i] > memo[i / 2] + 1)
        {
            memo[i] = memo[i / 2] + 1;
        }
        if (i % 3 == 0 && memo[i] > memo[i / 3] + 1) 
        {
            memo[i] = memo[i / 3] + 1;
        }
    }
    cout << memo[n] << '\n';

	return 0;
}