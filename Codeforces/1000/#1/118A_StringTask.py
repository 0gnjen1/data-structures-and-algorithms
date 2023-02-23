word = list(str(input().lower()))
vowels = list("aeiouy")

for i in range(0, len(word)):

    for j in range(0, len(vowels)):

        if vowels[j] in word:
            word.remove(vowels[j])

for k in range(0, len(word)*2, 2):

    word.insert(k, ".")

print("".join(word))
