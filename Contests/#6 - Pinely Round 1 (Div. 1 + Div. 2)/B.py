for t in range(0, int(input())):
    n = int(input())
    ring = list(map(int, input().split()))
    is_in_cycle = True

    for i in range(0, n):
        if ring[i%2] != ring[i]:
            is_in_cycle = False

    if is_in_cycle:
        print((n//2)+1)
    else:
        print(n)
