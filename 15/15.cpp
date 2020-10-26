#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int cofs(char* mes) {
	int c = 0;
	while (mes[++c] != '\0');
	return c;
}
void repeatchar(char* mes, int num) {
	for (int i = 0; i < cofs(mes); i++) {
		for (int j = 0; j < num; j++) {
			printf("%c", mes[i]);
		}
	}
}
int main() {
	char mes[1000];
	int num;
	printf("Enter Message : ");
	scanf("%[^\n]", mes);
	printf("Enter Number : ");
	scanf("%d", &num);
	repeatchar(mes, num);
	return 0;
}