#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int lens(char* str) {
	int num = 0;
	while (str[++num] != '\0');
	return num;
}
int error(char* str) {
	int check = 0;
	for (int i = 0; i < lens(str); i++) {
		if (str[i] >= 48 && str[i] <= 57) {
			check = 1;
		}
	}
	return check;
}
void comma(char* str) {
	int keep = lens(str) % 3;
	int run = 0;
	if (keep == 0) {
		keep = 3;
	}
	for (int i = 0; i < keep; i++) {
		printf("%c", str[i]);
	}
	for (int i = keep; i < lens(str); i++) {
		if (run == 0) {
			printf(",");
		}
		printf("%c", str[i]);
		run++;
		if (run == 3) {
			run = 0;
		}
	}
}
int main()
{
	char str[100];
	scanf("%[^\n]", str);
	if (error(str) != 0) {
		comma(str);
	}
	else {
		printf("error");
	}
	return 0;
}