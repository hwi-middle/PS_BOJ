#include <bits/stdc++.h>
using namespace std;

int a[20][20]; //a[i][j] = i에서 j로 가는 비용

int main()
{
	int n;
	cin >> n;
	vector<int> v(n); //방문순서 저장

	for (int i = 0; i < n; i++)
	{
		v[i] = i;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}


	int ans = INT_MAX;
	do
	{
		bool skip = false;
		int sum = 0;

		//순서는 정해져있으므로(v에 저장) 그 순서대로 순회
		for (int i = 0; i < n - 1; i++)
		{
			//정해진 순서에서 갈 수 없는 경우가 있다면 답에 포함하지 않음
			if (a[v[i]][v[i + 1]] == 0)
			{
				skip = true;
				break;
			}
			//현재까지 정상적으로 순회 가능하다면 비용의 합 계산
			else
			{
				sum += a[v[i]][v[i + 1]];
			}
		}
		//마지막 지점에서 시작 지점으로 돌아오지 못하는 경우도 답에 포함하지 않음
		if (!skip && a[v[n - 1]][v[0]] != 0)
		{
			sum += a[v[n - 1]][v[0]];
			ans = min(ans, sum);
		}
			
	} while (next_permutation(v.begin(), v.end()));

	cout << ans;

	return 0;
}