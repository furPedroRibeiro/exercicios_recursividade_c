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

void pixels_imagem(int** m, const int rows, const int cols, int count_line){
    int **matriz = m;
    int **end_rows_after = m;
    int *end_cols_after = *end_rows_after;

    if(count_line < rows){
        matriz++;
        count_line++;
        pixels_imagem(matriz, rows, cols, count_line);
    }
    for(int i = 0; i < cols; i++){
        end_cols_after[i] = 255 - end_cols_after[i];
    }
}

int intercalar_elementos(int *v1, int *v2, int *v3, int size_vec_1, int size_vec_2, int size_vec_3){
    if((size_vec_1-size_vec_2) != 0 && (size_vec_1-size_vec_2) > 0){
        size_vec_3 = intercalar_elementos(v1, v2, v3, (size_vec_1-1), size_vec_2, size_vec_3);
        v3[size_vec_3] = v1[size_vec_1];
        return size_vec_3+1;
    } else if((size_vec_2-size_vec_1) != 0 && (size_vec_2-size_vec_1) > 0){
        size_vec_3 = intercalar_elementos(v1, v2, v3, size_vec_1, size_vec_2-1, size_vec_3);
        v3[size_vec_3] = v2[size_vec_2];
        return size_vec_3+1;
    } else if(size_vec_1 != 0){
        size_vec_3 = intercalar_elementos(v1, v2, v3, (size_vec_1-1), (size_vec_2-1), size_vec_3);
        v3[size_vec_3] = v1[size_vec_1];
        v3[size_vec_3+1] = v2[size_vec_2];
        return size_vec_3 + 2;
    } else if(size_vec_1 == 0){
        size_vec_3 = 0;
        v3[size_vec_3] = v1[size_vec_1];
        v3[size_vec_3+1] = v2[size_vec_2];
        return 2;
    }
    return 0;
}

void show_complexidade(){
    printf("\nOperacoes soma de inteiros: %d" ,count_operations_soma_naturais);
}
