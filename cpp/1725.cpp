//�ڵ� ��ó: https://blog.naver.com/kks227/220776241154

#include <bits/stdc++.h>

using namespace std;

int n, his[100000];

// ���� �������� ������׷� [start, end) ������ Ǫ�� �Լ�
int sol(int start, int end) {
	if (start == end) return 0; // base case: ���� 0
	if (start + 1 == end) return his[start]; // base case: ���� 1

	int mid = (start + end) / 2;
	int result = max(sol(start, mid), sol(mid, end)); // �� ���� ������ �ִ�

	// ���� ������ ���� �ִ� ���� O(e-s)�� ã��
	int w = 1, h = his[mid], l = mid, r = mid;
	while (r - l + 1 < end - start) {
		int p = l > start ? min(h, his[l - 1]) : -1; // �������� Ȯ������ ����� ����
		int q = r < end - 1 ? min(h, his[r + 1]) : -1; // ���������� Ȯ������ ����� ����
		// �� ����(����) ���̸� ���� ������ Ȯ��
		if (p >= q) {
			h = p;
			l--;
		}
		else {
			h = q;
			r++;
		}
		// �ִ� ����
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
