#include <stdio.h>
#include <math.h>

int main(void)
{
	int input;
	int x1,y1,r1,x2,y2,r2;
	double distance, subtract;

	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		distance = sqrt((pow(x2-x1, 2)) + (pow(y2-y1,2)));
		
		subtract = r1 > r2 ? r1 - r2 : r2 - r1;
		
		if (distance == 0 && r1 == r2)
			printf("-1\n");

		else if (distance == r1 + r2 || distance == subtract)
			printf("1\n");
		else if (distance < r1 + r2 && (subtract < distance))
			printf("2\n");
		else
			printf("0\n");
	}
	return 0; 
}