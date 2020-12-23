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
	//�� ĭ�� ���� ���� ���θ� ������. ���δ� 0, ���δ� 1.
	for (int s = 0; s < (1 << (n * m)); s++)
	{
		//������ ��
		int sum = 0;

		//���ΰ� �� ĭ ���ӵǴ��� Ȯ��
		for (int i = 0; i < n; i++)
		{
			//������ ������ ��
			int cur = 0;
			for (int j = 0; j < m; j++)
			{
				//Row-major order�� ����
				int k = i * m + j;
				if ((s & (1 << k)) == 0)
				{
					//���ݱ��� ������ ���� 10�� ���ϰ� ���� ���ϸ� ���ڸ����� �߰��� �Ͱ� ����
					cur = cur * 10 + c[i][j];
				}
				else
				{
					//���ӵ� ���ΰ� ����ٸ� �׶������� ���� sum�� �����ϰ�, cur�� 0 ����
					sum += cur;
					cur = 0;
				}
			}
			//�������� ���η� ������ ��츦 ����� ���������� sum�� cur ������
			//�������� ���ο��ٸ� cur�� 0�̹Ƿ� �������
			sum += cur;
		}

		//���ΰ� �� ĭ ���ӵǴ� �� Ȯ��
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