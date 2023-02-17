n = int(input())
words = []

for i in range(0, n):
    word = input()
    words.append(word)

for word in words:

    if len(word) < 11:
        print(word)

    else:
        print(word[0] + str(int(len(word))-2) + word[len(word)-1])
