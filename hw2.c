#include <stdio.h>

int main(void)
{
	double num1;
	printf("Please enter kilometers: ");
	scanf("%lf", &num1);
	printf("%.1f km is equal to %.1f", num1, num1 / 1.609);
	return 0;
}