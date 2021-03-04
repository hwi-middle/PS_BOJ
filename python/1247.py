# 언어를 pypy3로 제출할 것
for i in range(3):
    n = int(input())
    res = 0
    for j in range(n):
        res += int(input())
    if res > 0:
        print('+')
    elif res < 0:
        print('-')
    else:
        print('0')
