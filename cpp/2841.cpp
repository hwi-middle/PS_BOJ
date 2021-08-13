#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int p;

	cin >> n >> p;

	stack<int> guitarStrings[6];
	long long res = 0;

	for (int i = 0; i < n; i++)
	{
		int num;
		int fret;

		cin >> num >> fret;

		int idx = num - 1;
		if (guitarStrings[idx].empty())
		{
			guitarStrings[idx].push(fret);
			res++;
		}
		else if (guitarStrings[idx].top() < fret)
		{
			guitarStrings[idx].push(fret);
			res++;
		}
		else if (guitarStrings[idx].top() > fret)
		{
			while (!guitarStrings[idx].empty() && guitarStrings[idx].top() > fret)
			{
				guitarStrings[idx].pop();
				res++;
			}

			if (!guitarStrings[idx].empty() && guitarStrings[idx].top() == fret)
			{
				continue;
			}

			guitarStrings[idx].push(fret);
			res++;
		}
	}

	cout << res;

	return 0;
}