//소수 미리 구해둘 필요 없다는 사실에 유의.
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

    int n;
    cin >> n;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << "\n";
            n /= i;
        }
    }
    if (n > 1) {
        cout << n;
    }


	return 0;
}