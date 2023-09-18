/*
  Exercicios de ponteiros
 */
#include <stdio.h>
#include <stdlib.h>
// #include "09_exercicios_header.h"

void acumulador(int x){
    static int soma = 0;
    soma += x;
    printf("Acumulou %d.\n",soma);
}

int main(){

    printf("Declaracao das variaveis\n");
    int num=10;
    int data[3]={19, 4, 2013};
    char hello[30]="Hello";
    struct sponto {
        int x,y,z;
    } ponto = {10, 20, 30};

    printf("Declaracao dos ponteiros\n");
    int *pnum=&num;
    int (*pdata)[3];
    pdata=&data;
    char (*phello)[30];
    phello=&hello;
    struct sponto *pponto=&ponto;

    printf("Mensagens com os ponteiros\n");
    printf("  num=%d (em %p e %p)\n", *pnum, pnum, &num);
    printf("  data=%d/%d/%d \n", (*pdata)[0], (*pdata)[1], (*pdata)[2]);
    printf("  hello=%s (em %p e %p)\n", phello, phello, &hello);
    printf("  ponto.x=%d, ponto.y=%d, ponto.z=%d \n", (*pponto).x, pponto->y, pponto->z);

    // free(pnum); 
    // pnum=NULL;
 
    printf("Declaracao dos ponteiros com malloc\n");
    int *pnum2=malloc(sizeof(int));
    pnum2=&num;
    int *pdata2=(int*)malloc(sizeof(int)*256);
    pdata2=data;
    char *phello2=(char*)malloc(sizeof(char)*256);
    phello2=hello;
    struct sponto *pponto2=(struct sponto*)malloc(sizeof(struct sponto));
    pponto2=&ponto; // ou pponto2[0]=ponto;

    printf("Mensagens com os ponteiros\n");
    printf("  num=%d (em %p e %p)\n", *pnum2, &num, pnum2);
    printf("  data=%d/%d/%d \n", pdata2[0], pdata2[1], pdata2[2]);
    printf("  hello=%s (em %p e %p)\n", phello2, phello2, &hello);
    printf("  ponto.x=%d, ponto.y=%d, ponto.z=%d \n", (*pponto2).x, pponto2->y, pponto2->z);

    // free(*pnum2); pnum2=NULL;


    printf("\nFuncao Acumulador\n");
    acumulador(15);
    acumulador(25);
    acumulador(57);
    acumulador(3);
    
    // printf("\nFuncao Acumula externa\n");
    // acumula(15);
    // acumula(25);
    // acumula(57);
    // acumula(3);
    return 0;
}