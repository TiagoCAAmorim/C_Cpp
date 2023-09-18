/*
 * Modulo adicional para definir funcao
 */
#include <stdio.h>
#include "09_exercicios_header.h"

void acumula(int x){
    static int soma = 0;
    soma += x;
    printf("Acumulou %d.\n",soma);
}