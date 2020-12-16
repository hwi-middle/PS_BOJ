#include <bits/stdc++.h>
using namespace std;

int sol(vector<int>& v)
{
	int sum = 0;
	for (int i = 0; i < v.size() - 1; i++)
		sum += abs(v[i] - v[i + 1]);
	return sum;
}

int main()
{
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());


	int ans = 0;
	do
	{
		ans = max(ans, sol(v));
	} while (next_permutation(v.begin(), v.end()));

	cout << ans;

	return 0;
}