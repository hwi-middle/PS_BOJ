#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, l;
	cin >> n >> l;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	int start = 0;
	int res = 0;
	for (auto i : v)
	{
		if (start < i)
		{
			start = i + l - 1;	//�ѹ��� ���� �� �ִ� ������ ����
			res++;
		}
	}

	cout << res;

	return 0;
}
