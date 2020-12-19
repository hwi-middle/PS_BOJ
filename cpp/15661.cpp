#include <bits/stdc++.h>
using namespace std;

int n;
int s[20][20];

int sol(int idx, vector<int>& t1, vector<int>& t2)
{
	//정답을 찾은 경우
	if (idx == n)
	{
		if (t1.size() == 0) return -1;
		if (t2.size() == 0) return -1;
		int s1 = 0;
		int s2 = 0;
		for (int i = 0; i < t1.size(); i++)
		{
			for (int j = 0; j < t1.size(); j++)
			{
				s1 += s[t1[i]][t1[j]];
			}
		}		
		for (int i = 0; i < t2.size(); i++)
		{
			for (int j = 0; j < t2.size(); j++)
			{
				s2 += s[t2[i]][t2[j]];
			}
		}
		int diff = abs(s1 - s2);
		return diff;
	}

	//나머지 경우
	int ans = -1;

	//1번팀에 넣는 경우
	t1.push_back(idx);
	int s1 = sol(idx + 1, t1, t2);
	if (ans == -1 || (s1 != -1 && ans > s1)) //찾은 값이 최솟값이면 갱신
		ans = s1;
	t1.pop_back();

	//2번팀에 넣는 경우
	t2.push_back(idx);
	int s2 = sol(idx + 1, t1, t2);
	if (ans == -1 || (s2 != -1 && ans > s2)) //찾은 값이 최솟값이면 갱신
		ans = s2;
	t2.pop_back();
	return ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> s[i][j];
		}
	}
	vector<int> t1;
	vector<int> t2;

	cout << sol(0, t1, t2);

	return 0;
}