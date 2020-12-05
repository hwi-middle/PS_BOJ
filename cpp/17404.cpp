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
	for (int k = 0; k <= 2; k++) //ù ��° ���� �� ����
	{
		for (int j = 0; j <= 2; j++)
		{
			if (j == k) //������ų ���̹Ƿ� ���� ��� ����
			{
				d[1][j] = a[1][j];
			}
			else //������ų ���� �ƴϹǷ� ���Ѵ밪 ����
			{
				d[1][j] = INF;
			}
		}
		for (int i = 2; i <= n; i++) //�� ��° ������ DP ����
		{
			d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];
			d[i][1] = min(d[i - 1][0], d[i - 1][2]) + a[i][1];
			d[i][2] = min(d[i - 1][0], d[i - 1][1]) + a[i][2];
		}
		for (int j = 0; j <= 2; j++) //������ ���� ��
		{
			if (j == k) continue; //������ ���� ���� ù ��° ���� ������Ų ���� ���� �� ����
			ans = min(ans, d[n][j]);
		}
	}

	cout << ans;

	return 0;
}