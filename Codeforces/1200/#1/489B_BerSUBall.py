solution = 0

b = int(input())
bskill = list(map(int, input().split())); bskill.sort()

g = int(input())
gskill = list(map(int, input().split())); gskill.sort()

for i in range(0, b):

    for j in range(0, g):

        if bskill[i] == int(gskill[j])-1 or bskill[i] == gskill[j] or bskill[i] == gskill[j]+1:

            solution += 1
            del(gskill[j]); g-=1
            break

print(solution)
