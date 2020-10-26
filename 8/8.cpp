#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int strlen(char* mes) {
	int c = 0;
	while (mes[c] != '\0') {
		c++;
	}
	return c;
}
void checkbigsmallletter(char* mes, int* big, int* small) {
	for (int i = 0; i < strlen(mes); i++) {
		if (mes[i] >= 65 && mes[i] <= 90) {
			(*big)++;
		}
		else if (mes[i] >= 97 && mes[i] <= 122) {
			(*small)++;
		}
	}
}
int main() {
	char str[100];
	int big = 0;
	int small = 0;
	scanf("%[^\n]", str);
	checkbigsmallletter(str, &big, &small);
	printf("Big letter : %d \nSmall letter : %d", big, small);
	return 0;
}