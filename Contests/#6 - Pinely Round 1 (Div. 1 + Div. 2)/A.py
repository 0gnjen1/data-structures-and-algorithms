for t in range(0, int(input())):
    n, a, b = map(int, input().split())

    if n == a and n == b:
        print("Yes")
        continue

    if n == 2 or n == 3:
        print("No")
        continue

    if (a + b) <= (n - 2):
        print("Yes")
    else:
        print("No")
