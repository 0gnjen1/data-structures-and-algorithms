for i in range(int(input())):
    n, k = input().split()
    n = int(n); k = int(k)
    if k%(n-1) == 0:
        solution = n * (k // (n - 1)) - 1
    else:
        solution = n * (k // (n - 1)) + k % (n - 1)
    print(solution)