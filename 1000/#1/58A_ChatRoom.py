def solution(string):
    hello = "hello"
    j = 0
    for i in range(len(string)):
        if string[i] == hello[j]:
            j += 1
            if j == 5:
                print("YES")
                return None
    print("NO")


word = str(input())
solution(word)
