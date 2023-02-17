x = int(input())
cases = []
for i in range(0, x):
    cases.append(int(input()))
for i in range(0, x):
    print(str(-(cases[i])+1) + " " + str(cases[i]))