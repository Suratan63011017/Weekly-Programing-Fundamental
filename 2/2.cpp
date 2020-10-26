#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("Even");
	}
	else {
		printf("Odd");
	}
	return 0;
}