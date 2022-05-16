#include <bits/stdc++.h>

using namespace std;

int city[100][100];
const int EMPTY = 0;
const int HOUSE = 1;
const int CHICKEN = 2;
int n, m;
int ans = 987654321;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;


	vector<pair<int, int>> houses;
	vector<pair<int, int>> chickens;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int temp;
			cin >> temp;
			if (temp == HOUSE)
			{
				houses.push_back({ i,j });
			}
			else if (temp == CHICKEN)
			{
				chickens.push_back({ i,j });
			}
		}
	}

	for (int i = 1; i <= m; i++) // i: 폐업안할 치킨집 수
	{
		vector<bool> visit;

		for (int j = 0; j < i; j++)
			visit.push_back(true);

		for (int j = i; j < chickens.size(); j++)
			visit.push_back(false);

		sort(visit.begin(), visit.end());

		do
		{
			int city_distance = 0;
			vector<int> house_distances(houses.size(), 987654321);

			for (int j = 0; j < visit.size(); j++)
			{

				if (visit[j]) // 폐업 안한 치킨집이면
				{
					for (int k = 0; k < houses.size(); k++)
					{
						int distance = abs(houses[k].first - chickens[j].first) + abs(houses[k].second - chickens[j].second);
						house_distances[k] = min(house_distances[k], distance);
					}
				}
			}

			for (auto var : house_distances)
			{
				city_distance += var;
			}

			ans = min(ans, city_distance);
		} while (next_permutation(visit.begin(), visit.end()));
	}

	cout << ans;
	return 0;
}
