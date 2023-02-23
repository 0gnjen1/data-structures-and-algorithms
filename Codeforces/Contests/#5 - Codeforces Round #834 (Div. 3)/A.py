for t in range(0, int(input())):

    finished = False
    Yes = list("Yes")
    answer = list(str(input()))
    for i in range(0, len(answer)):
        if answer[i] != Yes[i%3]:
            break
        if i == (len(answer)-1):
            print("YES")
            finished = True
            break

    if finished is False:
        for i in range(0, len(answer)):
            if answer[i] != Yes[(i+1) % 3]:
                break
            if i == (len(answer)-1):
                print("YES")
                finished = True
                break

    if finished is False:
        for i in range(0, len(answer)):
            if answer[i] != Yes[(i+2) % 3]:
                break
            if i == (len(answer)-1):
                print("YES")
                finished = True
                break

    if finished is False:
        print("NO")
