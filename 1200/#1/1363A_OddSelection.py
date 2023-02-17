for t in range(int(input())):

    n,x = map(int, input().split())
    arr = list(map(int, input().split()))
    odd = 0
    even = 0

    for number in arr:

        if number % 2 == 0:
            even += 1
        else:
            odd += 1

    if odd < x:
        if even >= x-(n-odd):
            print("Yes")
        else:
            print("No")
    else:
        print("Yes")
