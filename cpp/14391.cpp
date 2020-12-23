#include <bits/stdc++.h>
using namespace std;

int c[4][4];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string line;
		cin >> line;
		for (int j = 0; j < m; j++)
		{
			c[i][j] = line[j] - '0';
		}
	}

	int ans = 0;
	//각 칸에 대해 가로 세로를 정해줌. 가로는 0, 세로는 1.
	for (int s = 0; s < (1 << (n * m)); s++)
	{
		//조각의 합
		int sum = 0;

		//가로가 몇 칸 연속되는지 확인
		for (int i = 0; i < n; i++)
		{
			//누적된 가로의 수
			int cur = 0;
			for (int j = 0; j < m; j++)
			{
				//Row-major order로 접근
				int k = i * m + j;
				if ((s & (1 << k)) == 0)
				{
					//지금까지 누적된 수에 10을 곱하고 수를 더하면 뒷자리수에 추가한 것과 같음
					cur = cur * 10 + c[i][j];
				}
				else
				{
					//연속된 가로가 끊겼다면 그때까지의 합을 sum에 저장하고, cur에 0 대입
					sum += cur;
					cur = 0;
				}
			}
			//마지막에 가로로 끝났을 경우를 대비해 마지막에도 sum에 cur 더해줌
			//마지막이 세로였다면 cur이 0이므로 영향없음
			sum += cur;
		}

		//세로가 몇 칸 연속되는 지 확인
		for (int i = 0; i < m; i++)
		{
			int cur = 0;
			for (int j = 0; j < n; j++)
			{
				int k = j * m + i;
				if ((s & (1 << k)) != 0)
				{
					cur = cur * 10 + c[j][i];
				}
				else {
					sum += cur;
					cur = 0;
				}
			}
			sum += cur;
		}
		ans = max(ans, sum);
	}

	cout << ans;

	return 0;
}