#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
    // float input
    float f;
    // rounded integer value of n
    int r;
    // count of coins used starting at 0
    int c = 0;
    // coins
    int q = 25, d = 10, n = 5;
    
    // get the input from the user
    do
    {
        printf("How much change is owed?\n");
        f = GetFloat();
    }
    while (f <= 0);
    
    // get rid of decimal and round n to an integar
    r = round(f * 100);
    
    // calculate number of coins used
    do
    {
        if (r >= q)
        {
            c = (r - (r % q)) / q;
            r = r % q;
        }
        else if (r >= d)
        {
            c = c + (r - (r % d)) / d;
            r = r % d; 
        }
        else if (r >= n)
        {
            c = c + (r - (r % n)) / n;
            r = r % n;
        }
        else
        {
            c = c + r;
            r = 0;
        }
    }
    while (r > 0);
    
    // print results
    printf("%i\n", c);
}
