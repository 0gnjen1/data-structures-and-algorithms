t = int(input())
songs = []
for i in range(0, t):
    songs.append(list(map(int, input().split())))
for i in range(0, t):
    minim = min(songs[i])
    numOfLen1, numOfLen2, numOfLen3 = songs[i][0], songs[i][1], songs[i][2]
    if numOfLen1 % 2 == 0 and numOfLen3 % 2 == 0:
        print(0)
    else:
        numOfLen1 -= minim; numOfLen2 -= minim; numOfLen3 -= minim
        print((numOfLen1 + numOfLen2 + numOfLen3) % 2)
