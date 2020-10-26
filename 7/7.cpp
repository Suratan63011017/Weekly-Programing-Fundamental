#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int px(int num) {
	int count = 0;
	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			count += i;
		}
	}
	return count;
}
int main() {
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		if (px(i) == i) {
			printf("%d ", i);
		}
	}
	return 0;
}