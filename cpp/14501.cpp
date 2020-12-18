#include <bits/stdc++.h>
using namespace std;

vector<int> choice;
void sol(int idx, int income, const vector<int>& t, const vector<int>& p)
{
	if (idx == t.size()) //찾은 경우
	{
		choice.push_back(income);
		return;
	}
	if (idx > t.size()) //불가능한 경우
	{
		return;
	}
	//나머지 경우
	sol(idx + 1, income, t, p);
	sol(idx + t[idx], income + p[idx], t, p);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> t(n);
	vector<int> p(n);
	for (int i = 0; i < n; i++)
	{
		cin >> t[i] >> p[i];
	}
	sol(0, 0, t, p);
	cout << *max_element(choice.begin(), choice.end());

	return 0;
}