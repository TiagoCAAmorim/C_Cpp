/*
  Ponteiros e gerenciamento de memoria
 */
#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){
    return x + y;
}

void inc(int *x){
    (*x)++;
}
void dec(int *x){
    (*x)--;
}

int main(){
    printf("\nAlocacao Estatica de Ponteiros\n");
    int a=1,b=3;
    int *pa=&a, *pb=&b;
    *pa=*pa+*pb;
    printf("Valores  a=%d,   b=%d\n",   a,   b);
    printf("       *pa=%d, *pb=%d\n", *pa, *pb);
    printf("Endereco &a=%p,  &b=%p\n",  &a,  &b);
    printf("         pa=%p,  pb=%p\n",  pa,  pb);

    printf("\nAlocacao Dinamica de Ponteiros\n");
    int *px,*py;
    int x=1,y=3;

    px=malloc(sizeof(int));
    py=malloc(sizeof(int));

    *px=10;
    *py=30;
    *px=*px+*py;

    printf("  x=%d, y=%d\n", x, y);
    printf("*px=%d, *py=%d\n", *px, *py);
    printf(" &x=%p, &y=%p\n", &x, &y);
    printf(" px=%p, py=%p\n", px, py);

    free(px);
    free(py);

    printf("Depois de free()\n");
    printf("px=%p, py=%p\n", px, py);
    px=py=NULL;
    printf("Depois de NULL\n");
    printf("px=%p, py=%p\n", px, py);

    free(px);
    free(py);

    printf("\nPonteiro para Vetor\n");
    int *parray;
    parray=(int*)calloc(10,sizeof(int));
    // int *parray = malloc(sizeof(int)*10);
    int *outroarray=(int*)calloc(10,sizeof(int));

    parray[0]=11;
    parray[9]=49; 
    printf("Posicao [0]: %d em %p\n", parray[0], &parray[0]);
    printf("Posicao [9]: %d em %p\n", parray[9], &parray[9]);
    printf("*(p):        %d em %p\n", *(parray), parray);
    printf("*(p+9):      %d em %p\n", *(parray+9), (parray+9));
    
    parray=realloc(parray,sizeof(int)*20);
    parray[19]=89;
    printf("Apos realloc para vetor de 20 int.\n");
    printf("Posicao [0]:  %d em %p\n", parray[0], &parray[0]);
    printf("Posicao [9]:  %d em %p\n", parray[9], &parray[9]);
    printf("Posicao [19]: %d em %p\n", parray[19], &parray[19]);
    printf("*(p+19):      %d em %p\n", *(parray+19), (parray+19));
    
    free(parray);parray=NULL;
    free(outroarray);outroarray=NULL;


    printf("\nPonteiro para String\n");
    char *nome=(char*)malloc(sizeof(char)*20);
    // char *nome=malloc(sizeof(char)*20);
    nome[0]='C';
    nome[1]='a';
    nome[2]='r';
    nome[3]='l';
    nome[4]='o';
    nome[5]='s';
    nome[6]='\0';
    printf("Nome '%s' (letra inicial: %c)(em %p)\n", nome, nome[0],nome);
    free(nome); nome=NULL;


    printf("\nPonteiro para Struct\n");
    struct tdata{
        int dia,mes,ano;
    } dia = {.dia=17, .mes=10, .ano=2012};
    struct tdata *pdia=&dia;
    printf("Data de hoje %d/%d/%d\n", pdia->dia, (*pdia).mes, dia.ano);


    printf("\nPonteiro para Funcao\n");
    int (*psoma)(int,int)=&soma;
    printf("funcao psom em %p => Resultado=%d\n",psoma,psoma(1,2));
    printf("funcao printf em %p \n",printf);


    printf("\nParametros de funcao como Ponteiro\n");
    x=1, y=3;
    printf("Valor inicial:          x=%d e y=%d\n",x,y);
    inc(&x);
    dec(&y);
    printf("Apos inc(&x) e dec(&y): x=%d e y=%d\n",x,y);
    
    return 0;
}