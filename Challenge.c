#include <stdio.h>

int main() {
    int start[18];
    int finish[9];

    for (int i = 0; i < 18; i++) {
        scanf("%d", &start[i]);
    }

    if (start[5] < start[2]) {
        finish[2] = start[5] + 60 - start[2];
        start[4] = start[4] - 1;
    }
    else
        finish[2] = start[5] - start[2];

    if (start[4] < start[1]) {
        finish[1] = start[4] + 60 - start[1];
        start[3] = start[3] - 1;
    }
    else 
        finish[1] = start[4] - start[1];
    
    finish[0] = start[3] - start[0];
    
    
    if (start[11] < start[8]) {
        finish[5] = start[11] + 60 - start[8];
        start[10] = start[10] - 1;
    }
    else
        finish[5] = start[11] - start[8];

    if (start[10] < start[7]) {
        finish[4] = start[10] + 60 - start[7];
        start[9] = start[9] - 1;
    }
    else 
        finish[4] = start[10] - start[7];
    
    finish[3] = start[9] - start[6];

    
    if (start[17] < start[14]) {
        finish[8] = start[17] + 60 - start[14];
        start[16] = start[16] - 1;
    }
    else
        finish[8] = start[17] - start[14];

    if (start[16] < start[13]) {
        finish[7] = start[16] + 60 - start[13];
        start[15] = start[15] - 1;
    }
    else 
        finish[7] = start[16] - start[13];
    
    finish[6] = start[15] - start[12];

    printf("%d %d %d\n", finish[0], finish[1], finish[2]);
    printf("%d %d %d\n", finish[3], finish[4], finish[5]);
    printf("%d %d %d\n", finish[6], finish[7], finish[8]);

    return 0;
}