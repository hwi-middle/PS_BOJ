#include <iostream>
#include <string>
using namespace std;

int main()
{
	string oct;
	string bin;
	cin >> oct;

	for (int i = 0; i < oct.length(); i++)
	{
		for (char j = 1 << 2; j > 0; j /= 2)
		{
			(oct[i] & j) ? bin += '1' : bin += '0';
		}
	}

	int idx = 0;
	while (bin[idx] != '1' && idx < bin.length())
	{
		idx++;
	}

	if (idx == bin.length()) cout << "0";

	else cout << bin.substr(idx);

	return 0;
}