#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int lens(char* str) {
	int count = 0;
	while (str[++count] != '\0');
	return count;
}

void morsecode(char* str) {
	char az[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char morse[26][5] = { "._","_...","_._.","_..",".",".._.","__.","....","..",".___","_._","._..","__","_.","___",".__.","__._","._.","...","_",".._","..._",".__","_.._","_.__","__.." };
	int c,d,keep=0,check=0,e,f=0;
	for (c = 0; c < lens(str); c++) {
		for (d = c; str[d] != '\0'&&str[d]!=' '; d++) {
			keep++;
		}
		for (int i = 0; i < 26; i++) {
			if (keep == lens(morse[i])) {
				e = c;
				while (str[e] != '\0' && str[e] != ' ') {
					if (str[e] != morse[i][f]) {
						check = 1;
					}
					f++;
					e++;
				}
				if (check == 0) {
					printf("%c",az[i]);
				}
			}
			check = 0;
			f = 0;
		}
		c += keep;
		keep = 0;
	}
}

int main() {
	char str[1000];
	scanf("%[^\n]", str);
	morsecode(str);
	return 0;
}