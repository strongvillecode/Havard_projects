#include <stdio.h>
#include <cs50.h>

float discount(float price);

int main(void)
{
    float regular = get_float("Regular Price ");
    float sale = regular * .85;
    printf("sale price: %.2f\n", sale);
    
}
float  discount(float price)
{
    return price * 0.85;
}