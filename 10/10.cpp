#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int strlen(char* msg) {
	int count = 0;
	while (msg[++count] != '\0');
	return count;
}
void changebigsmall(char* msg) {
	for (int i = 0; i < strlen(msg); i++) {
		if (msg[i] >= 65 && msg[i] <= 90) {
			printf("%c", msg[i] + 32);
		}
		else if (msg[i] >= 97 && msg[i] <= 122) {
			printf("%c", msg[i] - 32);
		}
		else {
			printf("%c", msg[i]);
		}
	}
}
int main() {
	char str[1000];
	scanf("%[^\n]", str);
	changebigsmall(str);
	return 0;
}