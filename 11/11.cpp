#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int strlen(char* msg) {
	int count = 0;
	while (msg[++count] != '\0');
	return count;
}
int main() {
	char az[] = "abcdefghijklmnopqrstuvwxyz";
	char AZ[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str[1000];
	scanf("%[^\n]", str);
	int num[26] = { 0 };
	for (int i = 0; i < strlen(str); i++) {
		for (int j = 0; j < 26; j++) {
			if (str[i] == az[j] || str[i] == AZ[j]) {
				num[j]++;
			}
		}
	}
	int max = 0;
	for (int i = 0; i < 26; i++) {
		if (num[i] > max) {
			max = num[i];
		}
	}
	printf("count = %d\n", max);
	for (int i = 0; i < 26; i++) {
		if (num[i] == max) {
			printf("(%c , %c)\n", AZ[i], az[i]);
		}
	}
	return 0;
}