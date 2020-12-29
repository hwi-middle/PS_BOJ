#include <bits/stdc++.h>
using namespace std;

int d[1001][1001];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	memset(d, -1, sizeof(d));

	queue<pair<int, int>> q;
	int n;
	cin >> n;
	d[1][0] = 0;
	q.push({ 1,0 });

	while (!q.empty())
	{
		int s, c;
		tie(s, c) = q.front();
		q.pop();

		//복사
		if (d[s][s] == -1) //-1이면 아직 방문하지 않음
		{
			d[s][s] = d[s][c] + 1;
			q.push({ s, s });
		}
		//붙여넣기
		if (s + c <= n && d[s + c][c] == -1)
		{
			d[s + c][c] = d[s][c] + 1;
			q.push({ s + c, c });
		}
		//삭제
		if (s - 1 >= 0 && d[s - 1][c] == -1)
		{
			d[s - 1][c] = d[s][c] + 1;
			q.push({ s - 1, c });
		}
	}

	int ans = -1;
	for (int i = 0; i <= n; i++)
	{
		if (d[n][i] != -1)
		{
			if (ans == -1 || ans > d[n][i])
			{
				ans = d[n][i];
			}
		}
	}
	cout << ans;

	return 0;
}