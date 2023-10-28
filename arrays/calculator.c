#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt user for x
    float x = get_float("x: ");
    
    //prompt user for y
    float y = get_float("y: ");
    
    //divide x by y
    float z = x / y;
    
    //perform addition
    printf("%.50f\n", z);
}