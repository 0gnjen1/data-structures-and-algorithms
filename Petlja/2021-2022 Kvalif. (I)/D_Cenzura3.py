tekst = list(str(input()))
rec = list(str(input()))
pojavljivanja = []
i = 0
while i < len(tekst):

    if tekst[i] == rec[0]:

        kolSlova = [0] * len(rec)
        j = i
        m = 0
        for slovo in rec:
            while j < len(tekst) and tekst[j] == slovo:
                kolSlova[m] += 1
                if j < len(tekst):
                    j += 1
            m += 1

        val = 0
        for f in kolSlova:
            if f == 0:
                val += 1

        if val == 0:
            pojavljivanja.append([i])
            pojavljivanja[0].append(kolSlova)
            i = j-1
    i += 1

print(pojavljivanja)

resenja = []
for slucaj in pojavljivanja:



    mini = slucaj[0][1]
    for i in slucaj[0]:
        if i < mini:
            mini = i
    resenja.append(mini)

print(max(resenja))
