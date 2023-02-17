n, m = map(int, input().split())
solution = 0

while m > n:

    if m % 2 == 0:
        m//=2
        solution+=1

    else:
        m+=1
        solution+=1

solution+=abs(n-m)

print(solution)
