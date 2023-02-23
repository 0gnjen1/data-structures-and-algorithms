def binarysearch(arr, x, l, r):

    if r >= l:

        mid = l + (r - l) // 2

        if arr[mid] == x:
            return mid
        elif arr[mid] < x:
            return binarysearch(arr, x, mid+1, r)
        else:
            return binarysearch(arr, x, l, mid-1)

    else:
        return -1


print("Input the array:")
arr = list(map(int, input().split()))
print("Find the index of which number:")
x = int(input())
#solution = binarysearch(arr, x, 0, len(arr)-1)
print("The index of the number in the array is:")
print(binarysearch(arr, x, 0, len(arr)-1))
