/*
  Blocos, escopo, estrutras de controle
 */
int var_a=10;
#include <stdio.h>
int main()
{
    printf("\nEscopo das Variaveis\n");
    int x=1;
    printf("Bloco principal: x=%i\n",x);
    {
        char x='a';
        printf("    1o bloco interno: x=%c\n",x);
        {
            int x=20;
            int var_b=20;
            printf("        2o bloco interno: x=%d\n",x);
            printf("                          var_a=%d (<= nao foi redeclarado!)\n",var_a);
            printf("                          var_b=%d\n",var_b);
        }
        printf("    1o bloco interno x=%c\n",x);
    }
    // int x=100; // no mesmo escopo
    printf("Bloco principal: var_a=%d\n",var_a);
    printf("                 x=%d\n", x);
    printf("                 var_b nao existe aqui!");


    printf("\nComando if\n");
    if(1>-5) printf("1 e maior que -5!\n");
    if(1>5) printf("1 e maior que 5!\n");

    x=1;
    int y=3;
    if( x > y )
    {
        printf("%d e maior que %d\n",x,y);
    }
    else if( x < y )
    {
        printf("%d e menor que %d\n",x,y);
    }
    else 
    {
        printf("%d e igual a %d\n",x,y);
    }

    printf("\nComando switch\n");
    x=2;
    switch(x)
    {
        case 1: printf("x=1\n"); break;
        case 2: printf("x=2\n");
        case 3: printf("x=3\n"); break;
        default: printf("o valor x= é diferente de todos os cases\n");
    }

    printf("\nComando while\n");
    int cont=0;

    printf("while com i<=5\n");
    while(cont <=5)
    {
        printf("C1 cont=%d\n",cont);
        cont++;
    }

    printf("\nwhile com i--\n");
    while(cont--)
        printf("C2 cont=%d\n",cont);

    printf("\nwhile com --i\n");
    cont=6;
    while(--cont)
        printf("C3 cont=%d\n",cont);

    printf("\nwhile com i++<=5\n");
    while(cont++ <=5);
        printf("C4 cont=%d\n",cont);    

    cont=1;
    printf("\ndo while com i<=5\n");
    do
    {
        printf("C1 cont=%d\n",cont);
        cont++;
    }
    while( cont <=5 );

    printf("\ndo while com i--\n");
    cont-=1;
    do
        printf("C2 cont=%d\n",cont);
    while( cont-- );
    
    cont=5;
    printf("\ndo while com --i\n");
    do
        printf("C2 cont=%d\n",cont);
    while( --cont );


    printf("\nComando for\n");

    printf("for 'usual'\n");
    for(cont=1 ; cont<=5 ; cont++)
        printf("C1 cont=%d\n",cont);
    printf("Valor na saida: %d\n",cont);

    printf("\nfor regressivo\n");
    for( ; cont >=0 ; cont--)
    {
        printf("C2 cont=%d\n",cont);
    }
    printf("Valor na saida: %d\n",cont);

    printf("\nfor progressivo\n");
    for( ; cont<=5 ; )
        printf("C3 cont=%d\n",cont++);
    printf("Valor na saida: %d\n",cont);

    printf("\nfor sem declarar contador\n");
    for(int outro=1 ; outro<=5 ; outro++ )
        printf("C4 outro=%d\n",outro++);
    printf("Contador nao existe na saida\n");

    printf("\nfor com dois contadores\n");
    for( int outro=5,cont=1 ; outro>=0 && cont<=5 ; outro--,cont++ )
        printf("C5 cont=%d e outro=%d\n",cont, outro);    


    printf("\nComandos continue e break\n");
    printf("  continue no 3 e break no 5\n");
    cont=1;
    while( cont++ <=10 )
    {
        if( cont==3 ) continue;
        if( cont==5 ) break;
        printf("C1 cont=%d\n",cont);
    }

    do
    {
        if( cont==3 ) continue;
        if( cont==5 ) break;
        printf("C2 cont=%d\n",cont);
    } while( cont-- >= 0 );

    for( cont=1 ; cont <= 10 ; cont++)
    {
        if( cont==3 ) continue;
        if( cont==5 ) break;
        printf("C3 cont=%d\n",cont);
    };

    printf("\nComando goto\n");

    cont=0;
    inicio:
    printf("cont1=%d\n",++cont);
    if( cont<5 ) goto inicio;
    else goto fim;
    printf("Texto que e pulado!\n");
    fim:

    return 0;
}