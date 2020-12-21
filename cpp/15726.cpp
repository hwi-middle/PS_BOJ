#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int r1, r2;
	r1 = a * b / c;
	r2 = a / b * c;
	int res = r1 > r2 ? r1 : r2;
	cout << res;

	return 0;
}