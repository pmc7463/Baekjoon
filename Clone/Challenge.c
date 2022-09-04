#include <stdio.h>

int main() {
	int test, height, weight, room;

	scanf("%d", &test);
	
	for (int i = 0; i < test; i++) {
		scanf("%d %d %d", &height, &weight, &room);

		if (room % height == 0)
			printf("%d%02d\n", height, room / height);
		
		else
			printf("%d%02d\n", room % height, room / height + 1);
	}
	return 0;
}