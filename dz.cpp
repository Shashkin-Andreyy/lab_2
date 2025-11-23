#include <stdio.h>

int main() 
{
    double price_candy = 230.0;
    double price_cookie = 86.0;
    double price_apple = 74.0;

    double x = 1.0;
    double y = 1.5;
    double z = 2.0;

    double cost_candy = price_candy * x;
    double cost_cookie = price_cookie * y;
    double cost_apple = price_apple * z;
    double cost = cost_candy + cost_cookie + cost_apple;

    printf("Общая стоимость: %.2f\n", cost);
}