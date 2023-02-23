for t in range(0, int(input())):
    n, k = map(int, input().split())
    cur = 1
    hours = 0
    while cur < k:
        cur *= 2
        hours += 1
    if cur < n:
        hours += (n - cur + k - 1) // k
    print(hours)
