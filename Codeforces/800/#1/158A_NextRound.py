n, k = map(int, input().split())
score = input().split()
solution = 0

for i in range(0, n):

    if int(score[i]) >= int(score[k-1]) and int(score[i]) != 0:
        solution += 1

print(solution)
