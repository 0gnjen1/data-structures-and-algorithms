def main():
    n, k = map(int, input().split())
    nums = list(map(int, input().split()))
    nums.sort()

    if k == 0:
        ans = nums[0]-1
    else:
        ans = nums[k-1]

    cnt = 0
    for i in range(0, n):
        if nums[i] <= ans:
            cnt += 1

    if cnt != k or not (1 <= ans and ans <= 1000000000):
        print("-1")
        return 0

    print(ans)


main()
