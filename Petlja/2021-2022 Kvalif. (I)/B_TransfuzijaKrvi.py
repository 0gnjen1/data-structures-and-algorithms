n = int(input())
zalihaO, zalihaA, zalihaB, zalihaAB = map(int, input().split())
utroseno = []
neizracunati = []
breakCase = 0

for i in range(n):

    krGrPac, potrebno = input().split()
    potrebno = int(potrebno)
    utroseno.append([0, 0, 0, 0])

    # za krvnu grupu AB
    if krGrPac == "AB":
        vrednost = [i, potrebno]
        neizracunati.append(vrednost)

    # za krvnu grupu O
    elif krGrPac == "O":

        if potrebno <= zalihaO:
            zalihaO -= potrebno
            utroseno[i][0] = potrebno

        else:
            print("nemoguce")
            breakCase += 1
            break

    # za krvnu grupu A
    elif krGrPac == "A":

        if potrebno <= zalihaA + zalihaO:

            if potrebno <= zalihaA:
                zalihaA -= potrebno
                utroseno[i][1] = potrebno

            else:
                potrebno -= zalihaA
                utroseno[i][1] = zalihaA
                zalihaA = 0
                zalihaO -= potrebno
                utroseno[i][0] = potrebno

        else:
            print("nemoguce")
            breakCase += 1
            break

    # za krvnu grupu B
    elif krGrPac == "B":

        if potrebno <= zalihaB + zalihaO:

            if potrebno <= zalihaB:
                zalihaB -= potrebno
                utroseno[i][2] = potrebno

            else:
                potrebno -= zalihaB
                utroseno[i][2] = zalihaB
                zalihaB = 0
                zalihaO -= potrebno
                utroseno[i][0] = potrebno

        else:
            print("nemoguce")
            breakCase += 1
            break

# da li je moguce za AB
for case in neizracunati:
    indeks = case[0]
    potrebno = case[1]

    if potrebno <= zalihaO + zalihaA + zalihaB + zalihaAB:

        # za O krvnu grupu
        if potrebno > zalihaO:
            utroseno[indeks][0] = zalihaO
            potrebno -= zalihaO
            zalihaO = 0
        elif potrebno == zalihaO:
            utroseno[indeks][0] = zalihaO
            potrebno = 0
            zalihaO = 0
        else:
            utroseno[indeks][0] = potrebno
            zalihaO -= potrebno
            potrebno = 0

        # za A krvnu grupu
        if potrebno > zalihaA:
            utroseno[indeks][1] = zalihaA
            potrebno -= zalihaA
            zalihaA = 0
        elif potrebno == zalihaA:
            utroseno[indeks][1] = zalihaA
            potrebno = 0
            zalihaA = 0
        else:
            utroseno[indeks][1] = potrebno
            zalihaA -= potrebno
            potrebno = 0

        # za B krvnu grupu
        if potrebno > zalihaB:
            utroseno[indeks][2] = zalihaB
            potrebno -= zalihaB
            zalihaB = 0
        elif potrebno == zalihaB:
            utroseno[indeks][2] = zalihaB
            potrebno = 0
            zalihaB = 0
        else:
            utroseno[indeks][2] = potrebno
            zalihaB -= potrebno
            potrebno = 0

        # za AB krvnu grupu
        if potrebno > zalihaAB:
            utroseno[indeks][3] = zalihaAB
            potrebno -= zalihaAB
            zalihaAB = 0
        elif potrebno == zalihaAB:
            utroseno[indeks][3] = zalihaAB
            potrebno = 0
            zalihaAB = 0
        else:
            utroseno[indeks][3] = potrebno
            zalihaAB -= potrebno
            potrebno = 0

    else:
        print("nemoguce")
        breakCase += 1
        break

# print ako je moguce
if breakCase == 0:
    print("moguce")
    for i in range(len(utroseno)):
        print(utroseno[i][0], utroseno[i][1], utroseno[i][2], utroseno[i][3])
