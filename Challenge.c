#include <stdio.h>

long long sum(int *a, int n) {
    long long re = 0;
    
    for(int i = 0; i < n; i++)
        re += a[i];
    return re;
}