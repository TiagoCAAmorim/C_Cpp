/*
 * nome: exemplo01.c
 * descrição: primeiro exemplo em C
 * data: 17/08/2012
 */
#include <stdio.h>
int main()
{
    // imprime Bom dia
    printf("Bom dia\n");

    // O comando printf
    //   i ou d     Inteiro
    //   u          Inteiro sem sinal
    //   o          Octal sem sinal
    //   X ou x     Hexadecimal sem sinal
    //   F ou f     Ponto flutuante.
    //   E ou e     Ponto flutuante notação cientifica.
    //   G ou g     Usar a melhor representação e ou f
    //   A ou a     Ponto flutuante em hexadecimal com sinal
    //   c          Caractere.
    //   s          String
    //   p          Ponteiro

    printf("L11) 10 =\t%d\t%i\t%u\t%o\t%x\n",10,10,10,10,10);
    printf("L12) -10 =\t%d\t%i\t%u\t%o\t%x\n",-10,-10,-10,-10,-10);
    printf("L13) 0.10 =\t%f\t%e\t%g\t%a\t%x\n",0.10,0.10,0.10,0.10,0.10);
    printf("L14) -0.10 =\t%f\t%e\t%g\t%a \n" ,-0.10,-0.10,-0.10,-0.10);
    printf("L15) char =\t%c string =\t%s\n", 'a' ,"Bom dia");
    printf("L15) ASCII =\t%d caractere =\t%c\n", 154 ,154);

    return 0;
}