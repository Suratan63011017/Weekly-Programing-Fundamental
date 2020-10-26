#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = num - i; j > 0; j--) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}