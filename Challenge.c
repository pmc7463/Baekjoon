#include <stdio.h>

int main(void) {
    int vacation, Koeran, Math, Kpage, Mpage, counter, temp1, temp2;

    scanf("%d %d %d %d %d", &vacation, &Koeran, &Math, &Kpage, &Mpage);

    for (int i = 1; ;i++) {
        temp1 = Kpage * i;
        temp2 = Mpage * i;

        if (Koeran <= temp1 && Math <= temp2) {
            counter = i;
            break;
        }
    }
    printf("%d\n", vacation - counter);

    return 0;
}