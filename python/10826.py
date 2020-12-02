n = int(input())
if n >= 2:
    res = 1
    p = 1
    pp = 0
    for i in range(0, n - 1):
        res = p + pp
        pp = p
        p = res
    print(res)
elif n == 0:
    print(0)
elif n == 1:
    print(1)
