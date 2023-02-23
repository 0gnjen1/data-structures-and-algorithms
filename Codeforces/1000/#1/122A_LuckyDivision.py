def solution(num):
    for i in range(1, num+1):
        if is_num_lucky(i) and num % i == 0:
            return "YES"
    return "NO"


def is_num_lucky(num):
    while num > 0:
        if num % 10 == 4 or num % 10 == 7:
            pass
        else:
            return False
        num //= 10
    return True


number = int(input())
print(solution(number))
