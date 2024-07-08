for t in range(0, int(input())):

    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    sum_total = sum(a)

    odd_total = 0
    even_total = 0
    for i in range(0, n):

        if a[i] % 2 == 0:
            even_total += 1
        else:
            odd_total += 1

    for j in range(0, q):

        query_type, amount = map(int, input().split())
        if (query_type == 0 and even_total == 0) or (query_type == 1 and odd_total == 0):
            print(sum_total)
            continue

        if query_type == 0:
            sum_total += even_total * amount
            if amount % 2 != 0:
                odd_total += even_total
                even_total = 0
        else:
            sum_total += odd_total * amount
            if amount % 2 != 0:
                even_total += odd_total
                odd_total = 0

        print(sum_total)
