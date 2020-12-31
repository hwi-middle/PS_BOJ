#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	char ch;
	cin >> ch;
	while (ch != '#')
	{
		string str;
		getline(cin, str);

		int cnt = 0;
		char alt_ch;
		int gap = abs('a' - 'A');
		if (ch >= 'a' && ch <= 'z') alt_ch = ch - gap;
		else alt_ch = ch + gap;
		for (auto c : str)
		{
			if (c == ch || c == alt_ch)
				cnt++;
		}
		cout << ch << " " << cnt << "\n";

		cin >> ch;
	}

	return 0;
}