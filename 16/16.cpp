#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int cofs(char* mes) {
	int c = 0;
	while (mes[++c] != '\0');
	return c;
}
int constrtoint(char ascii) {
	int asciikeep;
	if (ascii >= 48 && ascii <= 57) {
		asciikeep = ascii - '0';
		return asciikeep;
	}
	else {
		return -1;
	}
}
void atozchanging(char* mes) {
	char az[] = "abcdefghijklmnopqrstuvwxyz";
	int c;
	for (int i = 0; i < cofs(mes); i++) {
		if (constrtoint(mes[i]) >= 0 && constrtoint(mes[i + 1]) >= 0) {
			c = (constrtoint(mes[i]) * 10) + constrtoint(mes[i + 1]);
			printf("%c", az[c - 1]);
			i++;
		}
		else if (constrtoint(mes[i]) >= 0) {
			c = constrtoint(mes[i]);
			printf("%c", az[c - 1]);
		}
		else;
	}
}
int main() {
	char numstring[1000];
	printf("Enter number : ");
	scanf("%[^\n]", numstring);
	atozchanging(numstring);
	return 0;
}