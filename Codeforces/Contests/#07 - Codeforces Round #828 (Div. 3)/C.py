for t in range(0, int(input())):

    n, color = map(str, input().split())
    n = int(n)
    color_arr = list(str(input()))

    k = 0
    while color_arr[k] != "g":
        k += 1
    color_arr.extend(color_arr[:k+1])

    green_indexes = []
    for i in range(0, len(color_arr)):
        if color_arr[i] == "g":
            green_indexes.append(i)

    solution = 0
    for i in range(0, len(green_indexes)-1):

        if green_indexes[i] == green_indexes[i+1] - 1:
            continue

        possible_solution = 0
        j = green_indexes[i] + 1
        while color_arr[j] != "g":
            if color_arr[j] == color:
                possible_solution = green_indexes[i+1] - j
                break
            j += 1

        solution = max(solution, possible_solution)

    print(solution)
