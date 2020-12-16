#include <bits/stdc++.h>
using namespace std;

bool u[20]; //사용한 수면 true 아니면 false
int a[20];

void sol(int idx, int start, vector<int>& v)
{
	if (idx == 6)
	{
		for (int i = 0; i < 6; i++)
		{
			cout << a[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = start; i < v.size(); i++)
	{
		if (u[i]) continue;
		u[i] = true;
		a[idx] = v[i];
		sol(idx + 1, i + 1, v);
		u[i] = false;
	}
}

int main()
{
	int n;
	cin >> n;
	while (n != 0)
	{
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];

		sol(0, 0, v);
		cout << "\n";
		cin >> n;
	}

	return 0;
}