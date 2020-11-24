#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;
int prime[MAX]; //�Ҽ��鸸 ������������ ��Ƶ�
int pn; //�Ҽ��� ��
bool check[MAX + 1]; //true�� ������ ��

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

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		int res = 0;

		for (int j = 0; j < pn; j++)
		{
			if (n - prime[j] >= 2 && prime[j] <= n - prime[j])
			{
				if (check[n - prime[j]] == false)
				{
					res++;
				}
			}
			else
			{
				break;
			}
		}
		cout << res << "\n";
	}


	return 0;
}