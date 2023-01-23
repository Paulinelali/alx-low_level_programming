#include <stdio.h>
#include <stdarg.h>

void pt(int arg1, ...)
{
    va_list ap;
    int i;
    va_start(ap, arg1);
    for ( i = arg1; i >= 0; i = va_arg(ap, int))
        printf("%d ", i);
    va_end(ap);
    putchar('\n');
    
}

int main(void)
{
    pt(1,2,3,4,5,6,7,-1,34);
    return (0);
}