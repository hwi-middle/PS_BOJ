//코드 출처: https://blog.naver.com/kks227/220776241154

#include <bits/stdc++.h>

using namespace std;

int n, his[100000];

// 분할 정복으로 히스토그램 [start, end) 문제를 푸는 함수
int sol(int start, int end) {
	if (start == end) return 0; // base case: 넓이 0
	if (start + 1 == end) return his[start]; // base case: 넓이 1

	int mid = (start + end) / 2;
	int result = max(sol(start, mid), sol(mid, end)); // 각 양쪽 구간의 최댓값

	// 양쪽 구간에 걸쳐 있는 답을 O(e-s)에 찾음
	int w = 1, h = his[mid], l = mid, r = mid;
	while (r - l + 1 < end - start) {
		int p = l > start ? min(h, his[l - 1]) : -1; // 왼쪽으로 확장했을 경우의 높이
		int q = r < end - 1 ? min(h, his[r + 1]) : -1; // 오른쪽으로 확장했을 경우의 높이
		// 더 높은(같은) 높이를 가진 쪽으로 확장
		if (p >= q) {
			h = p;
			l--;
		}
		else {
			h = q;
			r++;
		}
		// 최댓값 갱신
		result = max(result, ++w * h);
	}
	return result;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> his[i];
	cout << sol(0, n);

	return 0;
}
