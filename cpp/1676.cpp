//뒤에 0을 추가할 수 있는 것은 10을 곱하는 것.
//소인수분해 해서 2*5를 찾으면 되는데 무조건 2가 더 많으므로 5의 수만 세면 됨.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 5; i <= n; i *= 5)
		cnt += n / i;

	cout << cnt;

	return 0;
}