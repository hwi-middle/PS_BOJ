#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	long long res;
	for (int i = 0; i < t; i++)
	{
		int a, b;
		cin >> a >> b;
		res = a;

		//�ŵ����� �� �� 1�� �ڸ��� �ִ� 4�� �ֱ�� �ݺ���
		b = b % 4 + 4;

		for (int j = 2; j <= b; j++)
		{
			res = res * a % 10;
		}

		if (res == 0)
		{
			res = 10;
		}
		cout << res << "\n";
	}

	return 0;
}