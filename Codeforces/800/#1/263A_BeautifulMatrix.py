
solution = 0

rowA = [int(x) for x in input().split()]
rowB = [int(x) for x in input().split()]
rowC = [int(x) for x in input().split()]
rowD = [int(x) for x in input().split()]
rowE = [int(x) for x in input().split()]

if int(1) in rowA:
    solution = 2 + abs(rowA.index(1) - 2)
elif int(1) in rowB:
    solution = 1 + abs(rowB.index(1) - 2)
elif int(1) in rowC:
    solution = abs(rowC.index(1) - 2)
elif int(1) in rowD:
    solution = 1 + abs(rowD.index(1) - 2)
else:  # int(1) in rowE
    solution = 2 + abs(rowE.index(1) - 2)

print(solution)
