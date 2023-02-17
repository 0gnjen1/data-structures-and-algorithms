def fights(s, n, dragons):
    for i in range(n):
        if s > dragons[i][0]:
            s += int(dragons[i][1])
        else:
            return False
    return True


s, n = map(int, input().split())

dragons = []
for i in range(n):
    dragon = []
    x, y = map(int, input().split())
    dragon.append(x)
    dragon.append(y)
    dragons.append(dragon)

dragons.sort(key=lambda x: x[0])

if fights(s, n, dragons):
    print("YES")
else:
    print("NO")
