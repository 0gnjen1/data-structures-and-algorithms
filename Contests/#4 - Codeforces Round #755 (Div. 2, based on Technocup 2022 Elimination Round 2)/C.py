def sort(arr):
    qs(arr, 0, len(arr)-1)
    return arr


def qs(arr, l, r):
    if l >= r:
        return
    p = partition(arr, l, r)
    qs(arr, p+1, r)
    qs(arr, l, p-1)


def partition(arr, l, r):
    pivot = arr[r]
    i = l-1
    for j in range(l, r):
        if arr[j] < pivot:
            i += 1
            arr[j], arr[i] = arr[i], arr[j]
    arr[i+1], arr[r] = arr[r], arr[i+1]
    return i+1


for t in range(int(input())):
    n = int(input())
    a = sort(list(map(int, input().split())))
    b = sort(list(map(int, input().split())))

    no = 0

    for j in range(n):

        if a[j] == b[j] or a[j] == b[j]-1:
            pass

        else:
            no += 1
            print("NO")
            break

    if no == 0:
        print("YES")
