d = [0 for i in range(36)]


def sol(x):
    if x == 0 or x == 1:
        return 1
    if d[x] > 0:
        return d[x]

    temp = 0
    if x % 2 != 0:
        temp += sol(x // 2) * sol(x // 2)

    for i in range(0, x // 2):
        temp += 2 * sol(i) * sol(x - 1 - i)

    d[x] = temp
    return temp


n = int(input())
print(sol(n))
