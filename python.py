A_price, A_gram = map(int, input().split())

repetition = int(input())

A_store = (1000 / A_gram) * A_price

min_price = A_store

for _ in range(repetition):
    x_price, x_gram = map(int, input().split())
    amount = (1000 / x_gram) * x_price
    if min_price > amount:
        min_price = amount

print(f"{min_price:.2f}")
