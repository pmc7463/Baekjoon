#include <stdio.h>

int main() {
    int human, cnt;
    int body[50][2];

    scanf("%d", &human);
​
​
    for (int i = 0; i < human; i++) {
        scanf("%d %d", &body[i][0], &body[i][1]);
    }

    for (int i = 0; i < human; i++) {
        cnt = 0;
        for (int j = 0; j < human; j++) {
            if (body[i][0] < body[j][0] && body[i][1] < body[j][1]) {
                cnt++;
            }
        }
        printf("%d ", ++cnt);
    }
    

    return 0;
}​
