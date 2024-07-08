def convert(s):
    str1 = ""
    return (str1.join(s))


t = int(input())
cases = []

for i in range(0, t):
    cases.append(input())

for case in cases:

    case = list(case)
    case[0] = case[len(case)-1]
    print(convert(case))
