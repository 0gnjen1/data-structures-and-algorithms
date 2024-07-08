for t in range(0, int(input())):

    val = False
    m, s = map(int, input().split())
    arr = sorted(list(map(int, input().split())))
    x = 0

    if arr[0] == 0:
        print("NO")
        continue

    if arr[0] != 1:
        x += ((arr[0]-1)*(arr[0]))/2

    if x > s:
        print("NO")
        continue

    for i in range(0, m-1):
        if arr[i] == arr[i+1]:
            print("NO")
            val = True
            break
        if (arr[i]+1) != arr[i+1]:
            x += (((arr[i+1]-1)-arr[i]) * ((arr[i+1]-1)+arr[i]+1))/2
            if x > s:
                print("NO")
                continue

    if val is True:
        continue

    i = arr[len(arr)-1]
    while x != s:
        x += i+1
        if x > s:
            print("NO")
            break
        i += 1

    if x == s:
        print("YES")
