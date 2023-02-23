x = int(input())
y = int(input())
xarr = [int(i) for i in str(x)]
yarr = [int(i) for i in str(y)]

solution = []
if len(xarr) > len(yarr):
    solution = xarr[:len(xarr)-len(yarr)]
    del xarr[:len(xarr) - len(yarr)]
elif len(xarr) < len(yarr):
    solution = yarr[:len(yarr)-len(xarr)]
    del yarr[:len(yarr)-len(xarr)]

for i in range(0, len(xarr)):
    solution.append(max(xarr[i], yarr[i]))
    if xarr[i] == yarr[i]:
        solution.append(xarr[i])

for i in solution:
    print(i, end="")
