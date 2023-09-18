/*
 * Manipulacao de arquivos
 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[]){
    for( int cont=0 ; cont<argc ; cont++)
        printf("argv[%d]=\"%s\"\n", cont, argv[cont]);

    if( argc>2 ){
        printf("\nTransforma com atof\n");
        float x=atof(argv[2]);
        if( x==0.0 && argv[2][0] != '0' ){
            printf("3o argumento nao e um inteiro. Foi lido %s.", argv[2]);
        } else{
            fprintf(stdout,"Original %s\n",argv[2]);
            fprintf(stdout,"Lido %f\n",x);
        }

        printf("\nTransforma com strtof\n");
        char *endptr;
        float y=strtof(argv[2], &endptr);
        if( *endptr != '\0' ){
            printf("3o argumento nao e um inteiro. Foi lido %s.", argv[2]);
        } else{
            fprintf(stdout,"Original %s\n",argv[2]);
            fprintf(stdout,"Lido %f\n",x);
        }
    }

    return 0;
}