#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[101];
    int age;
} Member;

int main() {
    int N, i, j, min, max;

    scanf("%d", &N);

    Member m[N];

    for (i = 0; i < N; i++) {
        scanf("%d %s", &m[i].age, &m[i].name);

        if (!i) // 처음 시작
            max = min = m[i].age;
        else if (min > m[i].age)    // 기존에 있던 나이보다 더 나이가 적을때
            min = m[i].age;
        else if (max < m[i].age)    // 기존에 있던 나이보다 더 나이가 많을때
            max = m[i].age;
    }
    for (i = min; i <= max; i++)
        for (j = 0; j < N; j++)
            if (m[j].age == i)
                printf("%d %s\n", m[j].age, m[j].name);

    return 0;
}
