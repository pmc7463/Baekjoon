#include <stdio.h>
#include <stdlib.h>

int width(int x, int w) {
    int x1;

    x1 = w - x;    

    if (x1 >= x)
        return x;
    else
        return x1;
}

int height(int y, int h) {
    int y1;

    y1 = h - y;

    if(y1 >= y)
        return y;
    else
        return y1;
}

int main() {
    int x, y, w, h;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    if (width(x, w) > height(y, h))
        printf("%d\n", height(y, h));
    else
        printf("%d\n", width(x, w));

    return 0;
}