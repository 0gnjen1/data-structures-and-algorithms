for t in range(int(input())):

    # Here we let the number of people and their weights be inputed
    n = int(input())
    weights = list(map(int, input().split()))

    # Here we make a dictionary that tells us how many people with
    # each weight we have
    dictionary = dict()
    for i in weights:
        dictionary[i] = dictionary.get(i, 0) + 1

    # Here we iterate over all possible combinations
    maxi = 0
    for s in range(2, 2*n):
        value = 0
        for key in dictionary:
            if dictionary.get(s-key) is not None:
                value += min(dictionary.get(key), dictionary.get(s-key))
        value //= 2
        maxi = max(maxi, value)

    print(maxi)
