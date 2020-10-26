#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int strlen(char* msg) {
	int count = 0;
	while (msg[++count] != '\0');
	return count;
}
void checknum(char* msg, int* stack) {
	for (int i = 0; i < strlen(msg); i++) {
		if (msg[i] >= '0' && msg[i] <= '9') {
			(*stack) += msg[i] - 48;
		}
	}
}
int main() {
	int num = 0;
	char str[100];
	scanf("%[^\n]", str);
	checknum(str, &num);
	printf("%d", num);
	return 0;
}