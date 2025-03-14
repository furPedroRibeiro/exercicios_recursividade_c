#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    printf("Hello world!\n");

    int result_soma_naturais = soma_naturais(5);

    printf("\nSoma dos naturais: %d", result_soma_naturais);
    show_complexidade();

    return 0;
}
