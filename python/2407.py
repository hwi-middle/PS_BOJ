def permutation(a, b):
    res = 1
    k = a

    for i in range(b):
        res *= k
        k -= 1

    return res


def factorial(x):
    res = 1
    for i in range(2, x + 1):
        res *= i
    return res


n, m = input().split()
n = int(n)
m = int(m)

ans = permutation(n, m) // factorial(m)
print(ans)
