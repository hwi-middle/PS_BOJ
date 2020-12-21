#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	
	while (str.length() % 3 != 0)
	{
		str = "0" + str;
	}

	string res;
	for (int i = 0; i < str.length(); i+=3)
	{
		string temp = str.substr(i, 3);
		if (temp == "000")
			res += "0";
		else if (temp == "001")
			res += "1";
		else if (temp == "010")
			res += "2";
		else if (temp == "011")
			res += "3";
		else if (temp == "100")
			res += "4";
		else if (temp == "101")
			res += "5";
		else if (temp == "110")
			res += "6";
		else if (temp == "111")
			res += "7";
	}

	cout << res;

	return 0;
}