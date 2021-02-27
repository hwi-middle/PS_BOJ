#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	stack<int> s1;
	stack<int> s2;
	for (int i = n - 1; i >= 0; i--)
	{
		s1.push(v[i]);
	}

	int cur = 1;
	bool valid = true;
	while (!s1.empty())
	{
		if (s1.top() == cur)
		{
			cur++;
			s1.pop();
		}
		else
		{
			if (!s2.empty() && s2.top() == cur)
			{
				cur++;
				s2.pop();
			}
			else
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
	}

	while (!s2.empty())
	{
		if (s2.top() == cur)
		{
			s2.pop();
			cur++;
		}
		else
		{
			valid = false;
			break;
		}
	}

	if (valid)
	{
		cout << "Nice";
	}
	else
	{
		cout << "Sad";
	}

	return 0;
}
