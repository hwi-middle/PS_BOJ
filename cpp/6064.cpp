#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		int m, n, x, y;
		cin >> m >> n >> x >> y;

		x--;
		y--;

		bool pass = false;
		//x�� �����ذ��� �����ϴ� yã��
		for (int i = x; i < n * m; i += m)
		{
			if (i % n == y)
			{
				cout << i + 1 << "\n";
				pass = true;
				break;
			}
		}
		if (!pass)
			cout << -1 << "\n";
	}


	return 0;
}