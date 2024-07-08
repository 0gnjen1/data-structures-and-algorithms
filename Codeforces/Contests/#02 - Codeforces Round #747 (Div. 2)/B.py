
def index_exists(thelist, index):
    return index < len(thelist)


def is_it_special(value, num):
    powerOfValue = []
    while num > 1:
        powerOfValue.append(num % value)
        num -= num // value
        if num == value:
            break
    if 2 in powerOfValue:
        return False
    else:
        return True


t = int(input())
testCases = []
for i in range(0, t):
    testCases.append(list(map(int, input().split())))
for i in range(0, t):
    specialNums = []
    number = 1
    n = testCases[i][0]
    k = testCases[i][1]
    while not index_exists(specialNums, k):
        if is_it_special(n, number):
            specialNums.append(number)
        number += 1
    print(specialNums[k] % (1000000000+7))
