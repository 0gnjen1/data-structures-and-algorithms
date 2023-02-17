def solution(num):
    num = list(num)

    for i in range(len(num)):
        num[i] = int(num[i])

        if num[0] == 9:
            pass

        elif num[i] > 4:
            num[i] = 9 - num[i]

        num[i] = str(num[i])

    return "".join(num)


x = str(input())
print(solution(x))
