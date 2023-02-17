n = int(input())
solution = 0

for i in range(0, n):
    theList = []
    theList = input().split()

    if int(theList[0]) + int(theList[1]) + int(theList[2]) > 1:
        solution += 1

print(solution)
