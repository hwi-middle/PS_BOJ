#include<iostream>

using namespace std;

int a[100000];
int d1[100000];
int d2[100000];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	d1[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		d1[i] = max(a[i], d1[i - 1] + a[i]);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		d2[i] = max(a[i], d2[i + 1] + a[i]);
	}

	int ans = d1[0];

	//제외시키지 않는 경우
	for (int i = 1; i < n; i++)
	{
		ans = max(ans, d1[i]);
	}

	//제외시키는 경우
	for (int i = 1; i < n - 1; i++)
	{
		ans = max(ans, d1[i - 1] + d2[i + 1]);
	}

	cout << ans;

	return 0;
}