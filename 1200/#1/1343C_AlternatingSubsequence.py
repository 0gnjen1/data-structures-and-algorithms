t = int(input())

for j in range(t):

    n = int(input())
    arr = list(map(int, input().split()))

    i = 0
    solution = 0
    curr = []

    if arr[0] > 0:
        state = 1
    else:
        state = -1

    while i < len(arr):

        while state == 1:
            curr.append(arr[i])
            i += 1

            if i > len(arr)-1 or arr[i] < 0:
                state = -1
                solution += max(curr)
                curr = []
                break

        if i > len(arr)-1:
            print(solution)
            break

        while state == -1:
            curr.append(arr[i])
            i += 1

            if i > len(arr)-1 or arr[i] > 0:
                state = 1
                solution += max(curr)
                curr = []
                break

        if i > len(arr)-1:
            print(solution)
            break
