import copy


def binary_search(arr, x):
    low = 0
    high = len(arr) - 1
    mid = 0

    while low <= high:

        mid = (high + low) // 2

        if arr[mid] < x:
            low = mid + 1

        elif arr[mid] > x:
            high = mid - 1

        else:
            return mid

    return -1


n, q = map(int, input().split())
svi_glasovi = list(map(int, input().split()))
svi_ciljevi = list(map(int, input().split()))

for i in range(0, q):

    solution = 0
    cilj = svi_ciljevi[i]
    glasovi = copy.deepcopy(svi_glasovi)
    if cilj not in glasovi:
        glasovi.append(cilj)
        solution += 1
    glasovi = sorted(glasovi)

    present_at = binary_search(glasovi, cilj)
    leftmost = present_at
    rightmost = present_at
    j = present_at
    while j < (len(glasovi)-1) and glasovi[j] == glasovi[j+1]:
        rightmost += 1
        j += 1
    j = present_at
    while j > 0 and glasovi[j] == glasovi[j-1]:
        leftmost -= 1
        j -= 1

    indeks_medijane = (len(glasovi)//2)
    if (leftmost <= indeks_medijane) and (rightmost >= indeks_medijane):
        print(solution)
        continue

    if leftmost < indeks_medijane:
        leftmost_solution = (len(glasovi)-leftmost-1) - leftmost
    else:
        leftmost_solution = (leftmost-1) - (len(glasovi)-leftmost-1)
    if rightmost < indeks_medijane:
        rightmost_solution = (len(glasovi)-rightmost-1) - rightmost
    else:
        rightmost_solution = (rightmost-1) - (len(glasovi)-rightmost-1)


    print(solution+(min(leftmost_solution, rightmost_solution)))