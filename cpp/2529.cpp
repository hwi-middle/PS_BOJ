#include <bits/stdc++.h>
using namespace std;

int k;
char a[20];
bool u[10];

bool check(char a, char b, char op)
{
	if (op == '<')
		return a < b ? true : false;
	else
		return a > b ? true : false;
}

void sol(int idx, string str, vector<string>& ans)
{
	//답 후보 찾은 경우
	if (idx == k + 1)
	{
		ans.push_back(str);
		return;
	}

	//나머지 경우
	for (int i = 0; i <= 9; i++)
	{
		if (u[i]) continue;
		//조건에 부합하지 않으면 후보로 생각하지 않음
		if (idx == 0 || check(str[idx - 1], i + '0', a[idx - 1]))
		{
			u[i] = true;
			sol(idx + 1, str + to_string(i), ans);
			u[i] = false;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> a[i];
	}
	vector<string> ans;
	sol(0, "", ans);

	auto a = minmax_element(ans.begin(), ans.end());
	cout << *a.second << "\n" << *a.first;

	return 0;
}