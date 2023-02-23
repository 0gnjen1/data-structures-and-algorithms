for t in range(int(input())):

    n = int(input())
    arr = list(map(int, input().split()))

    dictionary = dict()
    for i in range(n):

        dictionary[arr[i]-i] = dictionary.get(arr[i]-i, 0) + 1

    solution = 0
    for i in dictionary:

        num = dictionary[i]
        solution += (num*(num-1))//2

    print(solution)
