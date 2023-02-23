def fib_2(n, memo):

    if memo[n] is not None:
        return memo[n]

    if n == 1 or n == 2:
        result = 1

    else:
        result = fib_2(n-1, memo) + fib_2(n-2, memo)

    memo[n] = result
    return result


def fib(n):
    memo = [None] * (n+1)
    return fib_2(n, memo)


x = int(input("Broj:"))
print(fib(x))
