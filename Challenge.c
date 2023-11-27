#include <stdio.h>

int main() {
<<<<<<< HEAD
    char str[5001];
	int length = 0;
	int flag;

    scanf("%s", str);

	while (str[length] != '\0')	{
		length++;
	}

	for (int i = 0; i < length; i++) {
		if (str[i] == 'p') {
			if (str[i + 1] == 'i') {
				flag = 1;
			}
			else {
				flag = 0;
				break;
			}
			i++;
		}
		else if (str[i] == 'k') {
			if (str[i + 1] == 'a') {
				flag = 1;
			}
			else {
				flag = 0;
				break;
			}
			i++;
		}
		else if (str[i] == 'c') {
			if (str[i + 1] == 'h') {
				if (str[i + 2] == 'u') {
					flag = 1;
				}
				else {
					flag = 2;
					break;
				}
			}
			else {
				flag = 2;
				break;
			}
			i += 2;
		}
		else {
			flag = 0;
			break;
		}
	}

	if (flag == 1) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}
=======
    int UR, TR, UO, TO; 
    
    scanf("%d %d %d %d", &UR, &TR, &UO, &TO);
    
    printf("%d", 56*UR + 24*TR + 14*UO + 6*TO);
    
return 0;
}
>>>>>>> 30ab3c51a702e7ca5e4ad5738f6ba21f2310be69
