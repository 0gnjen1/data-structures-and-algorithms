for t in range(0, int(input())):

    num, k = map(int, input().split())
    if k == 1:
        print(num)
        continue
    for i in range(1, k):
        #print('i:', i)
        mini = min([int(x) for x in str(num)])
        maxi = max([int(x) for x in str(num)])
        num += mini * maxi
        #('num:', num)
        if mini == 0 or maxi == 0:
            break

    print(num)
