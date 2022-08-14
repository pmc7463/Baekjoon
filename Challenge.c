#include <stdio.h>

struct Point3D {
    float x;
    float y;
    float z;
};

int main() {
    struct Point3D p1 = {10.0f, 20.0f, 30.0f};
    struct Point3D *ptr;

    ptr = &p1;

    printf("%f,\t%f,\t%f", ptr -> x, ptr -> y, ptr -> z);

    return 0;
}