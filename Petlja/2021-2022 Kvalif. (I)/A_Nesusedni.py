x = str(input())
c1 = x[0]
c2 = x[1]
a1, a2 = map(int, input().split())
solution = str()

if a1 == a2:
    for i in range(0, a1+a2):
        if i % 2 == 0:
            solution += str(c1)
        else:
            solution += str(c2)
    print(solution)

elif a1 == a2+1:
    solution += str(c1)
    for i in range(0, a1+a2-1):
        if i % 2 == 0:
            solution += str(c2)
        else:
            solution += str(c1)
    print(solution)

elif a1 == a2-1:
    solution += str(c2)
    for i in range(0, a1+a2-1):
        if i % 2 == 0:
            solution += str(c1)
        else:
            solution += str(c2)
    print(solution)

else:
    print("nemoguce")
