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
		//��ǥ ä���� �Է��ϱ� ���� ���ڹ�ư�� ���峵���� 0 ����
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

	int res = abs(n - 100); //���ڹ�ư�� ������ �ʰ� �̵��ϴ� Ƚ���� �ʱ갪

	for (int i = 0; i <= 1000000; i++)
	{
		int len = get_btn_num(i); //�ش� ���ڷ� �� �� �ִ��� üũ
		if (len > 0)
		{
			int press = abs(i - n); //���ڷ� �� �� �ִٸ� �� Ƚ�� üũ
			res = min(res, len + press); //���簪���� ������ ����
		}
	}

	cout << res;

	return 0;
}