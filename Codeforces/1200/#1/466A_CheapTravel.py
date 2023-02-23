values = list(map(int, input().split()))
n, m, a, b = values[0], values[1], values[2], values[3]
if m*a <= b:
    solution = n * a
else:
    solution = (n//m)*b + min(b, (n%m)*a)
print(solution)