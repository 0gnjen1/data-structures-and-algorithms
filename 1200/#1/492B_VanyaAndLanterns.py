n, l = input().split()
n = int(n); l = int(l)
points = list(map(int, input().split()))
points.sort()
maks = 0

for i in range(1, n):
    if points[i]-points[i-1] > maks:
        maks = points[i]-points[i-1]

if points[0] > maks/2:
    maks = (points[0])*2

if l - points[n-1] > maks/2:
    maks = (l-points[n-1])*2

print(format(maks/2, '.9f'))
