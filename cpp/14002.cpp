#include <bits/stdc++.h>

using namespace std;

int a[1000];
int d[1000];
int v[1000];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		d[i] = 1;
		v[i] = -1;
		for (int j = 0; j < i; j++)
		{
			if (a[j] < a[i] && d[i] < d[j] + 1)
			{
				d[i] = d[j] + 1;
				v[i] = j;
			}
		}
	}
	int max = -1;
	int idx = 0;
	for (int i = 0; i < n; i++)
	{
		if (d[i] > max)
		{
			max = d[i];
			idx = i;
		}
	}

	cout << max << "\n";
	
	stack<int> s;
	s.push(a[idx]);
	while (v[idx] >= 0)
	{
		s.push(a[v[idx]]);
		idx = v[idx];
	}

	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}

	return 0;
}