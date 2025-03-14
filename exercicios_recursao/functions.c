#include <stdlib.h>
#include <stdio.h>

#include "functions.h"

int count_operations_soma_naturais = 0;

int soma_naturais(int n){
    int result = 0;
    count_operations_soma_naturais++;
    if(n>1){
        result = soma_naturais(n-1);
        //condicional do if
        count_operations_soma_naturais++;
        //atribuição de result e n-1
        count_operations_soma_naturais = count_operations_soma_naturais + 2;
    } else{
        //operação do return
        count_operations_soma_naturais = count_operations_soma_naturais + 2;
        return result + n;
    }

    //operação do return
    count_operations_soma_naturais = count_operations_soma_naturais + 2;
    return result + n;
}
