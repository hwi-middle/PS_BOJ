#include<iostream>

using namespace std;

int a[1000];
int d1[1000];
int d2[1000];

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		d1[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (a[j] < a[i] && d1[i] < d1[j] + 1)
			{
				d1[i] = d1[j] + 1;
			}
		}
	}
	for (int i = n - 1; i >= 0; i--)
	{
		d2[i] = 1;
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j] && d2[i] < d2[j] + 1)
			{
				d2[i] = d2[j] + 1;
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans = max(ans, d1[i] + d2[i] - 1);
	}

	cout << ans;

	return 0;
}