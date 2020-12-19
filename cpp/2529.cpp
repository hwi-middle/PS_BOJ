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
	//�� �ĺ� ã�� ���
	if (idx == k + 1)
	{
		ans.push_back(str);
		return;
	}

	//������ ���
	for (int i = 0; i <= 9; i++)
	{
		if (u[i]) continue;
		//���ǿ� �������� ������ �ĺ��� �������� ����
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