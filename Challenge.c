#include <stdio.h>

int main () {
    int H, M, clock = 0;
    int x, y, z= 0;

    scanf("%d %d", &H, &M);
    scanf("%d", &clock);

    if((0 <= H && H <= 23) && (0 <= M && M <= 59) && (0 <= clock && clock <= 1000)){    
        if(clock + M < 60)  // 60�� ������ H ����ϱ� ���ؼ� ���ǹ� ���
            printf("%d %d", H, M + clock);
        else {
            x = (M + clock) / 60;   // 1�ð� �̻�
            y = clock % 60;         // ���� �� �� 

            if (M + y >= 60) {
                if(H + x < 23)  // ���� �ð� + ���� �ð� = 23�� �̸� 
                    printf("%d %d", H + x, M + y - 60);
                else if (H + x == 23)   // ���� �ð� + ���� �ð� == 23�� �� ��
                    printf("%d %d",H + x, M + y - 60);
                else {          // ���� �ð� + ���� �ð� = 23�� �̻�
                    if(M + clock >= 60) // ���� �ð� + ���� �ð� = 23�� �̻� + 60�� �̻� ��
                        printf("%d %d",H + x - 24, M + y - 60);
                }
            }
            else {
                if(H + x < 23)  // ���� �ð� + ���� �ð� = 23�� �̸� 
                    printf("%d %d", H + x, M + y);
                else if (H + x == 23)   // ���� �ð� + ���� �ð� == 23�� �� ��
                    printf("%d %d",H + x, M + y);
                else {          // ���� �ð� + ���� �ð� = 23�� �̻�
                    if(M + clock >= 60) // ���� �ð� + ���� �ð� = 23�� �̻� + 60�� �̻� ��
                        printf("%d %d",H + x - 24, M + y);
                 }
            }   
        }
    }
    else return 0;   // �Է� ����

   return 0;
}