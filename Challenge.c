#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int B_distance(Bx, By, Jx, Jy) {
	int x, y;
	
	if (Bx >= Jx)
		x = Bx - Jx;
	else
		x = Jx - Bx;

	if (By >= Jy)
		y = By - Jy;
	else
		y = Jy - By;
	
	return (x >= y) ? x : y;
}

int D_distance(Dx, Dy, Jx, Jy) {
	int sum = 0;

	if (Dx >= Jx)
		sum += Dx - Jx;
	else
		sum += Jx - Dx;

	if (Dy >= Jy)
		sum += Dy - Jy;
	else
		sum += Jy - Dy;
		
	return sum;
}

int main(void) {
	int Bx, By, Dx, Dy, Jx, Jy;
	int B, D;

	scanf("%d %d", &Bx, &By);
	scanf("%d %d", &Dx, &Dy);
	scanf("%d %d", &Jx, &Jy);

	D = D_distance(Dx, Dy, Jx, Jy);
	B = B_distance(Bx, By, Jx, Jy);

	if (D > B)
		printf("bessie");
	else if (B > D)
		printf("daisy");
	else
		printf("tie");


	return 0;
}