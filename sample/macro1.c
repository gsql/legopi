/*
* macro1: Ejemplo Macros
* 
*/

#include <stdio.h>

int main (void)
{
    #ifndef TEST
	printf("Prueba Macro\n");
    #endif
    printf ("Prueba\n");
    return 0;
}
