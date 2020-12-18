#include <bits/stdc++.h>
using namespace std;

//������� �н����尡 ���ǿ� �����ϴ��� üũ
bool check(string& pw)
{
	int j = 0; //������ ��
	int m = 0; //������ ��
	for (char ch : pw)
	{
		switch (ch)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			m++;
			break;
		default:
			j++;
			break;
		}
	}
	return j >= 2 && m >= 1;
}

void sol(int len, vector<char>& alpha, string pw, int idx)
{
	if (pw.length() == len && check(pw)) //������ ã�� ���
	{
		cout << pw << "\n";
		return;
	}
	if (idx == alpha.size()) //�Ұ����� ���
	{
		return;
	}

	sol(len, alpha, pw + alpha[idx], idx + 1); //idx��° ���ĺ� ������� �ʴ� ���
	sol(len, alpha, pw, idx + 1); //idx��° ���ĺ� ����ϴ� ���
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int l, c;
	cin >> l >> c;

	vector<char> v(c);
	for (int i = 0; i < c; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	sol(l, v, "", 0);

	return 0;
}