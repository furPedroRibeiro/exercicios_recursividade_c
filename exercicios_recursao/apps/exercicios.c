#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    //Exercícios sobre recursividade
    //Espaço destinado a primeira função -> soma de números naturais
    puts("---- FUNCAO SOMAR NATURAIS ----");
    int result_soma_naturais = soma_naturais(5);

    printf("\nSoma dos naturais: %d", result_soma_naturais);

    //Espaço destinado a segunda função -> pixels da imagem representada pela matriz
    puts("\n\n\n---- FUNCAO CONVERTER PIXELS DA IMAGEM ----");
    int **m;
    int n_rows;
    int n_cols;
    puts("\n\nQtd. linhas da matriz:");
    scanf("%i", &n_rows);
    puts("Qtd. colunas da matriz:");
    scanf("%i", &n_cols);

    //criando memória para as linhas da matriz
    m = (int **)calloc(n_rows, sizeof(int *));

    for(int i = 0; i < n_rows; i++){
        m[i] = (int *)calloc(n_cols, sizeof(int));
    }

    int **end_rows = m;
    int *end_cols = *end_rows;

    for(int i = 0; i < n_rows; i++){
        for(int j = 0; j < n_cols; j++){
            printf("\nDigite o conteudo na posicao[%i][%i]: ", i+1, j+1);
            scanf("%d", &end_cols[j]);
        }
        end_rows++;
        end_cols = *end_rows;
    }

    end_rows = m;
    end_cols = *end_rows;

    puts("\n-- Matriz antes:");

    for(int i = 0; i < n_rows; i++){
        printf("\n|");
        for(int j = 0; j < n_cols; j++){
            printf("%d ", end_cols[j]);
        }
        end_rows++;
        end_cols = *end_rows;
        printf("|");
    }

    int count_line = 1; //contador de linhas para a função recursiva
    pixels_imagem(m, n_rows, n_cols, count_line);

    end_rows = m;
    end_cols = *end_rows;

    puts("\n-- Matriz resultante:");

    for(int i = 0; i < n_rows; i++){
        printf("\n|");
        for(int j = 0; j < n_cols; j++){
            printf("%d ", end_cols[j]);
        }
        end_rows++;
        end_cols = *end_rows;
        printf("|");
    }

    //Espaço destinado a terceira função -> intercalar elementos de um vetor
    puts("\n\n\n---- FUNCAO INTERCALAR ELEMENTOS DO VETOR ----");

    int size_vec_1, size_vec_2;

    printf("\n Digite o tamanho do vetor 1: ");
    scanf("%d", &size_vec_1);

    printf("\n Digite o tamanho do vetor 2: ");
    scanf("%d", &size_vec_2);

    int *vec_1;

    //show_complexidade();

    return 0;
}
