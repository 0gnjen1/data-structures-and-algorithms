for t in range(0, int(input())):

    n = int(input())
    number_list = list(map(int, input().split()))
    char_list = list(str(input()))
    char_number = {}
    answer_printed = False

    if n == 1:
        print("YES")
        answer_printed = True

    for i in range(0, n):
        if number_list[i] not in char_number:
            char_number[number_list[i]] = char_list[i]
        elif char_number[number_list[i]] != char_list[i]:
            print("NO")
            answer_printed = True
            break

    if answer_printed is False:
        print("YES")
    