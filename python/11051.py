MOD = 10007


def factorial(n):
    res = 1
    for i in range(2, n + 1):
        res *= i
    return res


n, k = input().split()
n = int(n)
k = int(k)

ans = factorial(n) // (factorial(n - k) * factorial(k)) % MOD
print(ans)
