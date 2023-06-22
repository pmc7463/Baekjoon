repetition = int(input())

for _ in range(repetition):
    price = float(input())

    discount = price - price * 0.2

    print(f"${discount:.2f}")