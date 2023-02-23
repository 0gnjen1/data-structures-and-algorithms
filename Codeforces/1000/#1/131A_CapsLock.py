def capsFix(string):
    if string.isupper():
        print(string.lower())
    elif len(string) == 1 and string.islower():
        print(string.upper())
    elif string[0].islower() and string[1:].isupper():
        print(string[0].upper() + string[1:].lower())
    else:
        print(string)


input = str(input())
capsFix(input)
