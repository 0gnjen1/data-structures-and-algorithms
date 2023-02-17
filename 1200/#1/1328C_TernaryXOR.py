for t in range(int(input())):

    n = int(input())
    x = list(str(input()))
    a = []
    b = []

    for i in range(n):

        if x[i] == "1":
            a.append("1")
            b.append("0")
            for j in range(i+1, n):
                a.append("0")
                b.append(str(x[j]))
            break

        elif x[i] == "0":
            a.append("0")
            b.append("0")

        else:
            a.append("1")
            b.append("1")

    a = "".join(a)
    b = "".join(b)
    print(a)
    print(b)
