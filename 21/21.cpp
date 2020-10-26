#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int lens(char* str) {
	int count = 0;
	while (str[++count] != '\0');
	return count;
}

int check(char* str) {
	int i, j, k = 0, max[100] = { 0 }, maximum = 0;
	for (i = 0; i < lens(str); i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			j = i + 1;
			max[k] += str[i] - 48;
			while (str[j] >= '0' && str[j] <= '9') {
				max[k] *= 10;
				max[k] += str[j] - 48;
				j++;
				i = j;
			}
			if (max[k] >= maximum) {
				maximum = max[k];
			}
			k++;
		}
	}
	return maximum;
}

int main() {
	char str[1000];
	scanf("%[^\n]", str);
	printf("%d", check(str));
	return 0;
}