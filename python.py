repetition = int(input())

for _ in range(repetition):

    n = int(input())

    def dp(n):

        arr = [0] * 11

        arr[0] = 1
        arr[1] = 2
        arr[2] = 4

        for i in range(3, n):
            arr[i] = arr[i-1] + arr[i-2] + arr[i-3]

        return arr[n-1]

    print(dp(n))