#include <bits/stdc++.h>

using namespace std;

const int INF = 1000 * 1000 + 1;
int a[1001][3];
int d[1001][3];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}

	int ans = INF;
	for (int k = 0; k <= 2; k++) //첫 번째 집의 색 고정
	{
		for (int j = 0; j <= 2; j++)
		{
			if (j == k) //고정시킬 색이므로 실제 비용 대입
			{
				d[1][j] = a[1][j];
			}
			else //고정시킬 색이 아니므로 무한대값 대입
			{
				d[1][j] = INF;
			}
		}
		for (int i = 2; i <= n; i++) //두 번째 집부터 DP 수행
		{
			d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];
			d[i][1] = min(d[i - 1][0], d[i - 1][2]) + a[i][1];
			d[i][2] = min(d[i - 1][0], d[i - 1][1]) + a[i][2];
		}
		for (int j = 0; j <= 2; j++) //마지막 집의 색
		{
			if (j == k) continue; //마지막 집의 색은 첫 번째 집에 고정시킨 색과 같을 수 없음
			ans = min(ans, d[n][j]);
		}
	}

	cout << ans;

	return 0;
}