n, k = map(int, input().split())
karte = list(map(int, input().split()))

if karte.index(k) == len(karte)-1:
    print(karte[0])
else:
    print(karte[karte.index(k)+1])
