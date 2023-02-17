numberOfPiles = int(input())
piles = list(map(int, input().split()))
numberOfJuicy = int(input())
indexOfJuicy = list(map(int, input().split()))

partialSum = [0]
memo = 0

for j in range(numberOfPiles):
    partialSum.append(int(memo + piles[j]))
    memo += piles[j]

for i in indexOfJuicy:

    l = 0
    r = numberOfPiles

    while l <= r:

        mid = l + (r - l) // 2

        if partialSum[mid-1] < i and partialSum[mid] >= i:
            print(mid)
            break

        if partialSum[mid] < i:
            l = mid + 1

        if partialSum[mid] > i:
            r = mid - 1
