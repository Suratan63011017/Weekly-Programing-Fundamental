#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int lens(char* str) {
	int count = 0;
	while (str[++count] != '\0');
	return count;
}
void christmas(char* str, int number)
{
	int i = 1, j, k, l, a, b = 0, row = 0, num, x, sum = 0;

	num = number;
	while (row <= num)
	{
		row = row + i;
		if (row > num)
		{
			row = row - i;
			break;
		}
		i++;
	}
	a = i - 1;
	for (int z = 1; z <= a; z++) { sum += z; }
	for (j = 1; j <= a; j++)
	{
		k = a - j;
		if (sum == num && a % 2 == 0) { x = 2; }
		else if (num - sum <= a - 1 && a % 2 == 0) { x = 2; }
		else { x = 1; }
		for (l = x; l <= k; l++) { printf(" "); }
		if (j % 2 == 0 && j != a) { for (l = 0; l < j - 1; l++) { printf(" "); } }
		else if (j % 2 == 0 && num - sum == a) { for (l = 0; l < j - 1; l++) { printf(" "); } }
		else if (j % 2 == 0) { for (l = 1; l < j - 1; l++) { printf(" "); } }
		if (j % 2 == 0)
		{
			if (j != 1) { b = b + j; }
			for (l = 1; l <= j; l++)
			{
				printf("%c", str[b % lens(str)]);
				b++;
			}
		}
		else
		{
			b = b + j - 1;
			for (l = 1; l <= j; l++)
			{
				printf("%c", str[b % lens(str)]);
				b--;
			}
		}
		printf("\n");
	}
	if (a % 2 == 1)
	{
		b = b + a + 2;
		for (l = 1; l < a; l++) { printf(" "); }
		while (b <= num)
		{
			printf("%c", str[(b - 1) % lens(str)]);
			b++;
		}
	}
	else
	{
		if (num - sum <= a - 1) { x = 2; }
		else { x = 1; }
		for (l = x; l <= a - num + b; l++) { printf(" "); }
		while (num >= (b + 1))
		{
			printf("%c", str[(num - 1) % lens(str)]);
			num--;
		}
	}
}
int main() {
	char str[1000];
	int num;
	printf("input string : ");
	scanf("%[^\n]", str);
	printf("input number : ");
	scanf("%d", &num);
	christmas(str, num);
	return 0;
}