#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char str[51];
    int len;
} Str;

int compare(const void *a, const void *b) {
    Str s1 = *(Str*)a;
    Str s2 = *(Str*)b;

    if (s1.len < s2.len)
        return -1;
    else if (s1.len > s2.len) 
        return 1;
    return strcmp(s1.str, s2.str);
}

int main() {
    int n, i;
    int min = 0, max = 0;

    scanf("%d", &n);

    Str s[n];

    for (i = 0; i < n; i++) {
        scanf("%s", s[i].str);
        s[i].len = strlen(s[i].str);
    }

    qsort(s, n, sizeof(Str), compare);

    puts(s[0].str);

    for (i = 1; i < n; i++) {
        if (strcmp(s[i - 1].str, s[i].str))
            puts(s[i].str);
    }
    return 0;
}