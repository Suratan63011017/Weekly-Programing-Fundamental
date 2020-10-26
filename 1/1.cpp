#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int count = 0;
	char sentence[1000];
	scanf("%[^\n]", sentence);
	for (int i = 0; i < strlen(sentence); i++) {
		if (sentence[i] == 'a') {
			count++;
		}
	}
	printf("count of a = %d", count);
	return 0;
}