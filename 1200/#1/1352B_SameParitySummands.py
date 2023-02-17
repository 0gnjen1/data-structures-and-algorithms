for t in range(int(input())):

    n, k = map(int, input().split())

    n1 = n - (k-1)
    n2 = n - 2*(k-1)

    if n1 > 0 and n1 % 2 == 1:
        print("YES")
        for i in range(k-1):
            print(1)
        print(n1)

    elif n2 > 0 and n2 % 2 == 0:
        print("YES")
        for i in range(k-1):
            print(2)
        print(n2)

    else:
        print("NO")
