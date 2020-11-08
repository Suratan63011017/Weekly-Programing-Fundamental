#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
using namespace std;

int lens(char* str) {
	int count = 0;
	while (str[++count] != '\0');
	return count;
}
int hexachanges(char* str) {
	char hexamal[] = "ABCDEF";
	int j = lens(str) - 1;
	long int keep = 0;
	for (int i = 0; i < lens(str); i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			keep += ((str[i] - 48) * (pow(16, j)));
		}
		else {
			for (int k = 0; k < 6; k++) {
				if (str[i] == hexamal[k]) {
					keep += ((10 + k) * (pow(16, j)));
				}
			}
		}
		j--;
	}
	return keep;
}
int main() {
	char hexamal[1000];
	cin >> hexamal;
	cout << hexachanges(hexamal);
	return 0;
}
