#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int lens(char* str) {
	int c = 0;
	while (str[++c] != '\0');
	return c;
}
void trafficfont(char* c) {
	int keep;
	char fst[10][4] = { " _ ","   "," _ "," _ ","   "," _ "," _ "," _ "," _ "," _ " };
	char snd[10][4] = { "| |","  |"," _|"," _|","|_|","|_ ","|_ ","  |","|_|","|_|" };
	char trd[10][4] = { "|_|","  |","|_ "," _|","  |"," _|","|_|","  |","|_|"," _|" };
	for (int i = 0; i < lens(c); i++) {
		keep = c[i] - 48;
		for (int j = 0; j < 3; j++) {
			printf("%c", fst[keep][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < lens(c); i++) {
		keep = c[i] - 48;
		for (int j = 0; j < 3; j++) {
			printf("%c", snd[keep][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < lens(c); i++) {
		keep = c[i] - 48;
		for (int j = 0; j < 3; j++) {
			printf("%c", trd[keep][j]);
		}
	}
	printf("\n");
}
int main() {
	char num[1000];
	scanf("%s", num);
	trafficfont(num);
	return 0;
}
