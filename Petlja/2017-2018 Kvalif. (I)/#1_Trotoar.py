a, b, c = map(int, input().split())
solution = min(a*b*c, a*b+c, a+b*c, a+b+c)
print(solution)
