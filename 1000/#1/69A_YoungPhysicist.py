n = int(input())
score1, score2, score3 = 0, 0, 0
for i in range(0, n):
    theList = []
    theList = list(input().split())
    score1 += int(theList[0])
    score2 += int(theList[1])
    score2 += int(theList[2])

if score1 == 0 and score2 == 0 and score3 == 0:
    print("YES")
else:
    print("NO")
