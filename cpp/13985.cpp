#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	cout << str.length();
	if ((str[0] - '0') + (str[4] - '0') == (str[8] - '0'))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}