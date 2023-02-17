a = int(input())
b = int(input())
c = int(input())

valOne = a + b + c
valTwo = a * b * c
if (a+b) < (b+c):
    valThree = (a+b) * c
else:
    valThree = a * (b+c)

print(max(valOne, valTwo, valThree))
