#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int strc(char* mes) {
	int c = 0;
	while (mes[++c] != '\0');
	return c;
}
void checkmsg(char* mes) {
	int c = 0;
	char word[] = "helloworld";
	for (int i = 0; i < strc(mes); i++) {
		if (mes[i] == word[c] || mes[i] == word[c] - 32) {
			c++;
		}
	}
	if (c == 10) {
		printf("have");
	}
	else {
		printf("don't have");
	}
}
int main() {
	char mes[1000];
	scanf("%[^\n]", mes);
	checkmsg(mes);
	return 0;
}