#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int strlen(char* mes) {
	int c = 0;
	while (mes[++c] != '\0');
	return c;
}
void tableascii(char* mes) {
	char az[] = "abcdefghijklmnopqrstuvwxyz", AZ[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int numtble[26] = { 0 };
	for (int i = 0; i < strlen(mes); i++) {
		for (int j = 0; j < 26; j++) {
			if (mes[i] == az[j] || mes[i] == AZ[j]) {
				numtble[j]++;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		if (numtble[i] != 0) {
			printf("%c : ", AZ[i]);
			for (int j = 0; j < numtble[i]; j++) {
				printf("#");
			}
			printf("\n");
		}
	}
}
int main() {
	char mes[1000];
	scanf("%[^\n]", mes);
	tableascii(mes);
	return 0;
}