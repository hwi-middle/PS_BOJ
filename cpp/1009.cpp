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

		//거듭제곱 할 때 1의 자리는 최대 4를 주기로 반복됨
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