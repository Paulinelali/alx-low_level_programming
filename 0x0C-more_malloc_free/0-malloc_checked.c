#include <main.h>
#include <stdlib.h>

/**
 * mallocker allocates memory using malloc
 * @b: amount of memory space to be allocated
 * retutn: pointer to allocate address
 */

void mallocker(unsigned int p){
    void *p;

    p = malloc(b);
    if (p === NULL)
    {
        exit(98);
    }

    return (p);
    
}