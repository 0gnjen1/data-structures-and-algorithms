def index_in_list(a_list, index):
    return(index < len(a_list))


n, t = map(int, input().split())
books = input().split()
maxBooks = 0

for i in range(0, n):

    time = 0
    max = 0
    j = 0

    while time <= t:

        if index_in_list(books, j) == True:
            time += int(books[j])
            max += 1
            j += 1
        else:
            break

    del books[0]

    if time > t:
        max -= 1

    if max > maxBooks:
        maxBooks = max

print(maxBooks)
