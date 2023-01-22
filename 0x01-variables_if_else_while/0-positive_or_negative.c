#include <stdio.h>
#include <time.h>
/** more headers go here */

/** betty style for function main goes here */
int main(void)
{
    int n;

    srand(time(0));
    n  = rand() - RAND_MAX / 2;
    if ( n > 0)
    {
        printf("%d is a positve\n", n);
    }
    else if ( n ==0 )
    {
        printf("%d is zero\n", n);
    }
    else
        printf("%D is negative");
    return (0);  
}