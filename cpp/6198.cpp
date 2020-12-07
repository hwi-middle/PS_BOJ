#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> V;
	stack<pair<int, int>> S;
	for (int i = 0; i < n; i++)
	{
		int height;
		cin >> height;
		V.push_back(height);
	}

	long long sum = 0; //합은 int의 범위를 넘어설 수 있음
	for (int i = n - 1; i >= 0; i--)
	{
		if (S.empty())
		{
			S.push({ 0, V[i] });
			continue;
		}

		int cnt = 0;
		while (!S.empty() && S.top().second < V[i])
		{
			cnt++;
			cnt += S.top().first;
			S.pop();
		}
		S.push({ cnt, V[i] });
		sum += cnt;
	}

	cout << sum;

	return 0;
}