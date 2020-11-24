user_input = input().strip()
count = 1
if len(user_input) == 0:
    print(0)
else:
    for i in range(len(user_input)):
        if user_input[i] == ' ':
            count += 1
    print(count)
