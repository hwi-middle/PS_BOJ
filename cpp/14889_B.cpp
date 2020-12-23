#include <bits/stdc++.h>
using namespace std;

int n;
int s[20][20];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	const int INF = 987654321;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> s[i][j];
		}
	}

	int ans = INF;
	for (int i = 0; i < (1 << n); i++)
	{
		//���� ù ��° ���� �� ��° ���� �������� ����
		vector<int> t1, t2;
		for (int j = 0; j < n; j++)
		{
			if (i & (1 << j))
				t1.push_back(j);
			else
				t2.push_back(j);
		}

		//2/n�� ���������� �ʾҴٸ� continue
		if (t1.size() != n / 2) continue;

		int s1 = 0;
		int s2 = 0;

		for (int j = 0; j < t1.size(); j++)
		{
			for (int k = 0; k < t1.size(); k++)
			{
				s1 += s[t1[j]][t1[k]];
				s2 += s[t2[j]][t2[k]];
			}
		}
		int temp = abs(s1 - s2);
		ans = min(ans, temp);
	}

	cout << ans;

	return 0;
}