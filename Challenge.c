#include <stdio.h>

int main() {
	int subject, max = 0;
    int arr[1000];
    double sum[1000] = {0, };
    double average = 0;
    double temp;

    scanf("%d", &subject);

    for(int i = 0; i < subject; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] > max)
            max = arr[i];
    }

    for(int i = 0; i < subject; i++) {

        sum[i] = (arr[i] / (double)max) * 100;
        
        temp += sum[i];

        average = temp / subject;
    }

    printf("%lf\n", average);

    return 0;
}