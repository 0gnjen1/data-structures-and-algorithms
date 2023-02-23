n = int(input())
zaliha = list(map(int, input().split()))
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

        if potrebno <= zaliha[0]:
            zaliha[0] -= potrebno
            utroseno[i][0] = potrebno

        else:
            print("nemoguce")
            breakCase += 1
            break

    # za krvnu grupu A
    elif krGrPac == "A":

        if potrebno <= zaliha[1] + zaliha[0]:

            if potrebno <= zaliha[1]:
                zaliha[1] -= potrebno
                utroseno[i][1] = potrebno

            else:
                potrebno -= zaliha[1]
                utroseno[i][1] = zaliha[1]
                zaliha[1] = 0
                zaliha[0] -= potrebno
                utroseno[i][0] = potrebno

        else:
            print("nemoguce")
            breakCase += 1
            break

    # za krvnu grupu B
    elif krGrPac == "B":

        if potrebno <= zaliha[2] + zaliha[0]:

            if potrebno <= zaliha[2]:
                zaliha[2] -= potrebno
                utroseno[i][2] = potrebno

            else:
                potrebno -= zaliha[2]
                utroseno[i][2] = zaliha[2]
                zaliha[2] = 0
                zaliha[0] -= potrebno
                utroseno[i][0] = potrebno

        else:
            print("nemoguce")
            breakCase += 1
            break

# da li je moguce za AB
for case in neizracunati:
    indeks = case[0]
    potrebno = case[1]

    if potrebno <= zaliha[0] + zaliha[1] + zaliha[2] + zaliha[3]:

        for m in range(0, 4):
            if potrebno > zaliha[m]:
                utroseno[indeks][m] = zaliha[m]
                potrebno -= zaliha[m]
                zaliha[m] = 0
            elif potrebno == zaliha[m]:
                utroseno[indeks][m] = zaliha[m]
                potrebno = 0
                zaliha[m] = 0
            else:
                utroseno[indeks][m] = potrebno
                zaliha[m] -= potrebno
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
