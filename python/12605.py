t = int(input())
for i in range(1, t + 1):
    user_input = input().split()
    user_input.reverse()
    print('Case #%d:' % i, end=' ')
    print(' '.join(user_input))
