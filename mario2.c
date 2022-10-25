#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int n;
    while (true)
    {
        n = get_int("size: ");
        if (n > 0)
        {
            break;
        }
    }
   
/** do
    {
        n = get_int("width: ");
    }
    while (n < 1);
*/
  // For each row
    for (int i = 0; i < n; i++)
    {
        // For each column
        for (int j = 0; j < n; j++)
        {
            // Print a brick
    printf("#");
        }
        // move to next row
        printf("\n");
    }
}