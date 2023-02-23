for t in range(0, int(input())):

    n, x = map(int, input().split())
    arr = list(map(int, input().split()))

    val = False
    i = 0
    while val is False:
        if arr[i] % x != 0:
            val = True
        i += 1
    if val is False:
        print(-1)
        continue

    l = 0
    while True:
        if arr[l] % x != 0:
            break
        l += 1

    r = n
    while True:
        if arr[r] % x != 0:
            break
        r -= 1

    if n-l > r:
        print(n-l)
    else:
        print(r)