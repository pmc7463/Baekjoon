#include <stdio.h>
#include <string.h>

int main() {
    char N[11] = {0,};  // �ִ밡 1,000,000,000�̹Ƿ�, ���ڿ��� ũ�⸦ 11�� ��Ҵ�.
    int temp;

    gets(N);    //�Է��� ���� ���� ���ٷ� �ޱ� ���ؼ� ���

    for (int i = 0; i < strlen(N) - 1; i++) {
        for (int j = i; j < strlen(N); j++) {
            if (N[i] < N[j]) {  // ��������
                temp = N[i];
                N[i] = N[j];
                N[j] = temp;
            }
        }
    }
    puts(N);    //���ĵ� �� ���

    return 0;
}