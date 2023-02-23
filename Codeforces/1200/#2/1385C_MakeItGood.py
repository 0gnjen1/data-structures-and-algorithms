for t in range(0, int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    if n <= 2:
        print(0)
        continue

    ans = 0
    passedMax = False
    for i in range(n-1, 0, -1):
        if passedMax is False and arr[i] > arr[i-1]:
            passedMax = True
        if passedMax is True and arr[i] < arr[i-1]:
            ans = i
            break

    print(ans)
