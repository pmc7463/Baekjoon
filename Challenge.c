#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char subject[51];
    double num;
    char grade[3];

    double sum = 0.0;
    double temp;
    double gs = 0.0;

    for (int i = 0; i < 20; i++) {
        scanf("%s %lf %s", subject, &num, grade);
    
        if (grade[0] == 80)
            continue;

        sum += num;

        if (grade[0] == 70)
            continue;

        if (grade[0] == 65)
            temp = 4;
        else if (grade[0] == 66)
            temp = 3;
        else if (grade[0] == 67)
            temp = 2;
        else
            temp = 1;

        if (grade[1] == 43) {
            temp += 0.5;
        }

        gs += num * temp;
    }
    
    printf("%lf", gs/sum);

    return 0;
}