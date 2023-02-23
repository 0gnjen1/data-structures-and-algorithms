cardTwoAmount = 0
n = int(input())
a = list(map(int, input().split()))
answer = sum(a)
q = int(input())
cards = []
for _ in range(q):
    cards.append(list(map(int, input().split())))

for card in cards:
    if card[0] == 1 and card[3] > 0:
        answer += (card[2]-card[1]+1)*card[3]
    elif card[0] == 2:
        cardTwoAmount += 1

answer *= cardTwoAmount

print(answer)
