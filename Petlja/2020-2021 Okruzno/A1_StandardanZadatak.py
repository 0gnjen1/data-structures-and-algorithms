n = int(input())
a = list(map(int, input().split()))
dict = {}
for number in a:
    dict[number] = dict.get(number, 0) + 1
n -= dict[max(dict, key=lambda x: dict[x])]
print(dict)
print((n // 2) + (n % 2))
