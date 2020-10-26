#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int lens(char* str) {
	int i = 0;
	while (str[++i] != '\0');
	return i;
}

void trishape(char* str) {
	for (int i = 0; i < lens(str); i++) {
		for (int j = 0; j < lens(str); j++) {
			printf("%c ", str[j]);
		}
		printf("\n");
	}
}

int main() {
	char str[1000];
	scanf("%[^\n]", str);
	printf("\n");
	trishape(str);
	return 0;
}