#include <stdio.h>

int main()

{
	int n = 2;
	int k = 2;
	printf("Сейчас %d часов %d минут 00 секунд \n ", n, k);
	printf("Идёт %d минута суток \n ", k);
	printf("До полуночи осталось %d часов и %d минут \n ", n, k);
	printf("C 8.00 прошло %d минут \n ", n * 60);
	printf("Текущий час = %.2f суток и текущая минута = %.2f часа", (double)n / 24, (double)k / 60);
}