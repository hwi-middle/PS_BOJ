def hanoi(n, frm, tmp, to):
    if n == 1:
        print(str(frm) + " " + str(to))
        return

    hanoi(n - 1, frm, to, tmp)
    print(str(frm) + " " + str(to))
    hanoi(n - 1, tmp, frm, to)


num = int(input())
k = pow(2, num) - 1
print(k)
if num <= 20:
    hanoi(num, 1, 2, 3)
