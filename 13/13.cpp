#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int countofchar(char* mes) {
	int c = 0;
	while (mes[++c] != '\0');
	return c;
}
void numscale(char* mes) {
	for (int i = 0; i < countofchar(mes); i++) {
		if (mes[i] >= 48 && mes[i] <= 57) {
			printf("%c", mes[i]);
		}
	}
}
int main() {
	char mes[1000];
	scanf("%[^\n]", mes);
	numscale(mes);
	return 0;
}