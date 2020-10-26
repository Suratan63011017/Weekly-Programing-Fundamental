#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int strlen(char* mes) {
	int count = 0;
	while (mes[++count] != '\0');
	return count;
}

int check(char* mes) {
	int ccheck = 0;
	for (int i = 0; i < strlen(mes); i++) {
		if (mes[i] == 'l' && mes[i + 1] == 'o' && mes[i + 2] == 'v' && mes[i + 3] == 'e') {
			ccheck++;
		}
	}
	return ccheck;
}
int main() {
	char str[100];
	scanf("%s", str);
	printf("%d", check(str));
	return 0;
}