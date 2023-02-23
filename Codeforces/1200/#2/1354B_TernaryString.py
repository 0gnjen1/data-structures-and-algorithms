for t in range(int(input())):

    string = list(str(input()))
    curr = string[0]
    lengths = []

    if ("1" in string) is False or ("2" in string) is False or ("3" in string) is False:
        print(0)

    else:

        i = 0
        val = 0
        while i < len(string):
            #print("iteration " + str(i))

            if string[i] == curr:
                val += 1
                i += 1

            else:
                lengths.append(val)
                val = 0
                curr = string[i]


        print(min(lengths[1:])+2)

    print(lengths)
