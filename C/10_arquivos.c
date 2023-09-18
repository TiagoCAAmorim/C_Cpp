/*
 * Manipulacao de arquivos
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(){

    FILE *fp;
    fp=fopen("arquivo.csv","w");
    if( fp == NULL ){
        // printf("Erro no fopen() #%d: %s\n", errno, strerror(errno));
        perror("Erro no fopen()");
    }
    else{
        printf("Aberto arquivo para gravar dados.\n");
        for( int r=1 ; r<=10 ; r++ ){
            for( int c=1 ; c<=10 ; c++ ){
                fprintf(fp,"%f", (float)c*c/r);
                if( errno ) perror("Erro no fptintf()");
                if(c<10) fprintf(fp,", ", c+r);
            }
            fprintf(fp,"\n");
        }
        fclose(fp);
        printf("Fechado arquivo.\n");
    }

    fp=fopen("arquivo.csv","r");
    float num;
    if( fp == NULL ){
        perror("Erro com a funcao fopen");
    } else{
        printf("Lendo arquivo com valores double separados por virgula.\n");
        while( fscanf(fp,"%f,", &num) != EOF ){
            if( errno )
                perror("Erro com a funcao fscanf");
            else
                fprintf(stdout,"Lido %f\n",num);
        }
        fclose(fp);
        printf("Fechado arquivo.\n");
    }

    return 0;
}