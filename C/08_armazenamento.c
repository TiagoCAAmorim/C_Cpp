/*
  Classes de aramazenamento de variaveis
 */
#include <stdio.h>
#include <stdlib.h>
#include "newmodule.h"

// extern int variavel_externa;

int conta(){
    static int var=1;
    return var++;
}

int main(){

    // Comandos para usar modulo adicinal:
    //   gcc -c modulo1.c
    //   gcc -c modulo2.c
    //   gcc modulo1.o modulo2.o -o nome_executavel
    // Arquivo de header e usado para organizar as variaveis e funcoes definidas.
    // printf("\nAcesso a variavel externa=%d\n",variavel_externa);

    printf("\nVariavel Static (nao perde valor)\n");
    printf("Conta=%d\n",conta());
    printf("Conta=%d\n",conta());
    printf("Conta=%d\n",conta());
    printf("Conta=%d\n",conta());

    printf("\nVariavel Const (nao muda valor)\n");
    const int var=10, varb=15;
    int x=1, y=2;
    // var = 20; //erro

    printf("ponteiro para constante\n");
    const int *ptr_to_constant=&var;
    printf("1a alocacao: %d\n", *ptr_to_constant);
    // *ptr_to_constant=100; //erro
    ptr_to_constant=&varb; //OK
    printf("2a alocacao: %d\n", *ptr_to_constant);

    printf("ponteiro contante para variavel\n");
    int *const constant_ptr=&x;
    printf("Valor inicial: %d\n", *constant_ptr);
    *constant_ptr=100; //OK
    printf("Valor alterado: %d\n", *constant_ptr);
    // constant_ptr=&y; //erro
    
    printf("ponteiro constante para constante\n");
    const int *const const_ptr_to_const=&var;
    printf("Nao pode alterar nada!");
    // *const_ptr_to_const=100;//erro
    // const_ptr_to_const=&varb;//erro

    return 0;
}