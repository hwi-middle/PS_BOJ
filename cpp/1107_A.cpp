#include <bits/stdc++.h>
using namespace std;

bool broken[10];

int get_btn_num(int n)
{
	if (n == 0)
	{
		return (int)(!broken[0]);
	}

	string str = to_string(n);
	int len = 0;
	for (int i = 0; i < str.length(); i++)
	{
		//목표 채널을 입력하기 위한 숫자버튼이 고장났으면 0 리턴
		if (broken[str[i] - '0'])
		{
			return 0;
		}
		len++;
	}
	return len;
}

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int btn;
		cin >> btn;
		broken[btn] = true;
	}

	int res = abs(n - 100); //숫자버튼을 누르지 않고 이동하는 횟수가 초깃값

	for (int i = 0; i <= 1000000; i++)
	{
		int len = get_btn_num(i); //해당 숫자로 갈 수 있는지 체크
		if (len > 0)
		{
			int press = abs(i - n); //숫자로 갈 수 있다면 그 횟수 체크
			res = min(res, len + press); //현재값보다 작으면 대입
		}
	}

	cout << res;

	return 0;
}