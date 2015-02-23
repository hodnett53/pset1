#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    
    // get height from user
    do
    {
        printf("Height: ");
        n = GetInt();
    }
    while (n < 0 || n > 23);
    
    // print out pyramid
    for (int i = 0; i < n; i++)
    {
        // prints out the spaces
        for (int space = 0; space < (n - (i + 1)); space++) 
        {
            printf(" ");
        }
        // prints out the #'s
        for (int hash = 0; hash < (i + 2); hash++)
        {
            printf("#");
        }
        // returns to a new line
        printf("\n");
    }
}
