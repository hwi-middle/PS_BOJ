#include <bits/stdc++.h>

using namespace std;

int board[15]; // 퀸이 존재하는 곳: 인덱스가 행, 담긴 값이 열
int n;
int cnt;

void nqueen(int placed_num)
{
	// n개의 퀸을 놓았으니 성공
	if (placed_num == n)
	{
		cnt++;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		// 퀸을 놓아본다
		board[placed_num] = i;

		bool keep_solving = true;
		// 이번에 퀸을 놓는게 가능했을 경우에만 더 진행해본다
		for (int j = 0; j < placed_num; j++)
		{
			// 같은 행에 존재: 그럴일 없음 (1차원으로 압축했으므로)
			// 같은 열에 존재: 이미 배열에 같은 값이 존재함
			// 대각선에 존재: 행번호 간의 차와 열번호 간의 차가 같음
			if ((board[j] == board[placed_num]) || (placed_num - j == abs(board[placed_num] - board[j])))
			{
				keep_solving = false;
				break;
			}
		}

		if (keep_solving)
		{
			nqueen(placed_num + 1);
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	nqueen(0);
	cout << cnt;

	return 0;
}
