# include <stdio.h>

int dp[501][501];

int Max (int a, int b) {
    return a > b? a: b;
}

int main() {
    int i, j, n;
    int max = -1;

    scanf("%d", &n);
    
    i = 1;

    while (i <= n) {
        j = 1;
        while (j <= i) {
            scanf("%d", &dp[i][j]);
            j++;
        }
        i++;
    }

    i = 1;
    while (i <= n) {
        j = 1;
        while (j <= i) {
            if (j == 1)
                dp[i][j] = dp[i][j] + dp[i-1][j];
            else if (j == i) 
                dp[i][j] = dp[i][j] + dp[i-1][j-1];
            else
                dp[i][j] = dp[i][j] + Max(dp[i-1][j-1], dp[i-1][j]);
            if (max < dp[i][j])
                max = dp[i][j];
            j++;
        }
        i++;
    }
    printf("%d\n", max);

    return 0;
}