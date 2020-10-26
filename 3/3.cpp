#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char ascii;
	scanf("%c", &ascii);
	if (ascii >= 65 && ascii <= 90) {
		printf("Uppercase");
	}
	else if (ascii >= 97 && ascii <= 122) {
		printf("Lowercase");
	}
	else {
		printf("Error");
	}
	return 0;
}