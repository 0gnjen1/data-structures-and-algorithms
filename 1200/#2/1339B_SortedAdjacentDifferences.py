for t in range(0, int(input())):

    n = int(input())
    arr = list(input().split())
    arr = [int(x) for x in arr]
    arr = sorted(arr)

    solution = []
    if n % 2 == 1:
        solution.append(arr[n//2])
        del arr[n//2]
        n -= 1

    for i in range(n//2-1, -1, -1):
        solution.append(arr[i])
        solution.append(arr[n-i-1])

    print(*solution)
