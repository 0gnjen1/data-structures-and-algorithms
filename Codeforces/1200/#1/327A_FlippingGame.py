import copy

n = int(input())
x = list(map(int, input().split()))
max = 0
solution = 0

if 0 in x:

    for i in range(0, n+1):

        for j in range(i+1, n+1):

            summ = 0
            cws = x[i:j]

            for number in cws:
                if number == 0:
                    summ += 1
                else:
                    summ -= 1

            if summ > max:
                newx = copy.deepcopy(x)
                del newx[i:j]
                solution = sum(newx) + len(cws) - sum(cws)
                max = summ

    print(solution)

else:
    print(len(x)-1)
