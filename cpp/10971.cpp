#include <bits/stdc++.h>
using namespace std;

int a[20][20]; //a[i][j] = i���� j�� ���� ���

int main()
{
	int n;
	cin >> n;
	vector<int> v(n); //�湮���� ����

	for (int i = 0; i < n; i++)
	{
		v[i] = i;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}


	int ans = INT_MAX;
	do
	{
		bool skip = false;
		int sum = 0;

		//������ �����������Ƿ�(v�� ����) �� ������� ��ȸ
		for (int i = 0; i < n - 1; i++)
		{
			//������ �������� �� �� ���� ��찡 �ִٸ� �信 �������� ����
			if (a[v[i]][v[i + 1]] == 0)
			{
				skip = true;
				break;
			}
			//������� ���������� ��ȸ �����ϴٸ� ����� �� ���
			else
			{
				sum += a[v[i]][v[i + 1]];
			}
		}
		//������ �������� ���� �������� ���ƿ��� ���ϴ� ��쵵 �信 �������� ����
		if (!skip && a[v[n - 1]][v[0]] != 0)
		{
			sum += a[v[n - 1]][v[0]];
			ans = min(ans, sum);
		}
			
	} while (next_permutation(v.begin(), v.end()));

	cout << ans;

	return 0;
}