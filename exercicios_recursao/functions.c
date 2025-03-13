#include <stdlib.h>
#include <stdio.h>

#include "functions.h"

int soma_naturais(int n){
    int result = 0;

    if(n>1){
        result = soma_naturais(n-1);
    } else{
        return result + n;
    }

    return result + n;
}
