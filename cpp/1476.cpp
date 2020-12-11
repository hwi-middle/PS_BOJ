#include <bits/stdc++.h>
using namespace std;

int main()
{
	int e1, s1, m1;
	cin >> e1 >> s1 >> m1;

	int e2=1, s2=1, m2=1;
	int y = 1;
	while (true)
	{
		if (e1 == e2 && s1 == s2 && m1 == m2)
			break;
		e2++;
		s2++;
		m2++;
		y++;

		if (e2 > 15) e2 = 1;
		if (s2 > 28) s2 = 1;
		if (m2 > 19) m2 = 1;
	}

	cout << y;

	return 0;
}