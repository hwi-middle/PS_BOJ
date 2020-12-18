#include <bits/stdc++.h>
using namespace std;

//만들어진 패스워드가 조건에 부합하는지 체크
bool check(string& pw)
{
	int j = 0; //자음의 수
	int m = 0; //모음의 수
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
	if (pw.length() == len && check(pw)) //정답을 찾은 경우
	{
		cout << pw << "\n";
		return;
	}
	if (idx == alpha.size()) //불가능한 경우
	{
		return;
	}

	sol(len, alpha, pw + alpha[idx], idx + 1); //idx번째 알파벳 사용하지 않는 경우
	sol(len, alpha, pw, idx + 1); //idx번째 알파벳 사용하는 경우
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