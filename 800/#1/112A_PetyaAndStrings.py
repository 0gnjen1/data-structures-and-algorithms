wordA = list(str(input()).lower())
wordB = list(str(input()).lower())
alphabet = list(str("abcdefghijklmnopqrstuvwxyz"))
solution = 0

for i in range(0, len(wordA)):
    if alphabet.index(wordA[i]) == alphabet.index(wordB[i]):
        pass
    elif alphabet.index(wordA[i]) > alphabet.index(wordB[i]):
        solution += 1
        break
    elif alphabet.index(wordA[i]) < alphabet.index(wordB[i]):
        solution -= 1
        break

print(solution)
