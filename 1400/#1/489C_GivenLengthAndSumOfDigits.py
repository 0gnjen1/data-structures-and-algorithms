
m, s = map(int, input().split())
max = 0
min = 0

if s==0 or (m*9 < s):
    print("-1 -1")
else:
    stepen = m
    for i in range(0, m):
        if












#    while s>9:
#        max += 9*(10^stepen)
#        s -= 9
#        m -= 1
#    max += (s%9)*(10^stepen)
#    max *= 10^(stepen-1)
#print(max)