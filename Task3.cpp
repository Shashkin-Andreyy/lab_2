#include <stdio.h>

int main() 
{
	int n = 2;
	int l = 353;
	double result = (double)n / l;
	printf("Дано: %0.f\n", n);
	printf("      %0.f\n", l);
	printf("___________\n");
	printf("Ответ:\n");
	printf("0%02.4f\n", result);

	return 0;
}
