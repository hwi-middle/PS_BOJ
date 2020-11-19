#include <bits/stdc++.h>
using namespace std;

const int INF = 987654321;
const int MAX = 1000000;
int prime[MAX]; //소수들만 오름차순으로 모아둠
int pn; //소수의 수
bool check[MAX + 1]; //true면 지워진 것

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 2; i <= MAX; i++)
	{
		if (check[i] == false)
		{
			prime[pn++] = i;
			for (int j = i + i; j <= MAX; j += i)
			{
				check[j] = true;
			}
		}
	}

	int m = INF;
	pair<int, int> ans = { 0,0 };
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;

		for (int j = 0; j < pn; j++)
		{
			int a = prime[j];
			int b = n - a;
			if (b >= 2 && a <= b)
			{
				if (check[b] == false && abs(a - b) < m)
				{
					m = abs(a - b);
					ans.first = min(a,b);
					ans.second = max(a,b);
				}
			}
			else
			{
				break;
			}
		}

		m = INF;
		cout << ans.first << " " << ans.second << "\n";
	}


	return 0;
}