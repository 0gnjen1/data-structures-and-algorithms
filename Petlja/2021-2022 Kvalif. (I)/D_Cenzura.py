def check(tekst, i, rec, duzinaReci):
    kolSlova = [0] * duzinaReci
    m = 0
    for slovo in rec:
        if tekst[i] != slovo:
            return False

        while tekst[i] == slovo:
            kolSlova[m] += 1
            i += 1
        m += 1
    return kolSlova


tekst = list(str(input()))
rec = list(str(input()))
duzinaReci = len(rec)

for i in range(len(tekst)):

    kolSlova = [0] * duzinaReci
    m = 0
    for slovo in rec:
        if tekst[i] != slovo:
            break

        while tekst[i] == slovo:
            kolSlova[m] += 1
            i += 1
        m += 1

    else:
        print("ne ", i)
