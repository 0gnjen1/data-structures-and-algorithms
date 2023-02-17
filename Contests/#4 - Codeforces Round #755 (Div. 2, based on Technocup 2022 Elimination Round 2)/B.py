for t in range(int(input())):

    n, m = map(int, input().split())
    solution = (n*m) // 3
    if (n*m) % 3 != 0:
        solution += 1
    print(solution)
