#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct az {
	long int a;
	char b[20];
	char c[20];
};
int main() {
	struct az AZ[10];
	struct az free;
	int num = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%ld %s %s", &AZ[i].a, AZ[i].b, AZ[i].c);
	}
	while (num < 5) {
		if (num<4 && AZ[num].a>AZ[num + 1].a) {
			free = AZ[num + 1];
			AZ[num + 1] = AZ[num];
			AZ[num] = free;
			num = 0;
		}
		else { num++; }
	}
	for (int i = 0; i < 5; i++) {
		printf("%d. %s %s\n", i + 1, AZ[i].b, AZ[i].c);
	}
	return 0;
}