/*
  Operadores em C.
 */
#include <stdio.h>
int main()
{
    printf("\nOperadores matematicos\n");
    int x=1,y=3,z=5;
    x=y+z;
    z=x%y;
    printf("Operacao de modulo: %d%%%d = %d\n",x,y,z);
    z=15*z;
    y=z/x;
    printf("Divisao inteira: %d/%d = %d\n",z,x,y);

    x=1;
    printf("Valor inicial: x=%i\n", x);
    y=x++;
    printf("Com y=x++:     x=%i, y=%i\n", x, y);
    z=++x;
    printf("Com z=++x:     x=%i, y=%i e z=%i\n", x, y, z );


    printf("\nOperadores relacionais\n");
    x=1,y=3,z=5;
    printf("%d>%d => %i\n", x,y,x>y);
    printf("%d<%d => %i\n", x,z,x<z);
    printf("%d<=%d => %i\n", y,z,y<=z );
    printf("%d==%d => %d\n", x,y,x==y);
    printf("%d!=%d => %d\n", x,z,x!=z );
    printf("%d>%d>%d => %d\n", z,y,x,z>y>x);
    printf("  Nao da certo porque primeiro faz %d>%d => %d\n", z,y,z>y);
    printf("  E depois faz %d>%d => %d\n", z>y,x,z>y>x);

    printf("\nOperadores logicos\n");
    x=1,y=1,z=0;
    int k=0;
    printf("%d && %d => %d\n", x,y,x&&y);
    printf("%d && %d => %d\n", x,z,x&&z);
    printf("%d && %d => %d\n", k,z,k&&z);

    printf("%d || %d => %d\n", x,y,x||y);   
    printf("%d || %d => %d\n", x,z,x||z);
    printf("%d || %d => %d\n", k,z,k||z);

    printf("!%d => %d\n", x,!x);   
    printf("!%d => %d\n", z,!z);   

    printf("%d ^ %d => %d\n", x,y,x^y);   
    printf("%d ^ %d => %d\n", x,z,x^z);
    printf("%d ^ %d => %d\n", k,z,k^z);


    printf("\nOperadores de atribuicao\n");
    x=2,y=3,z=10;
    printf("Valores iniciais: x=%i, y=%i, z=%i\n", x,y,z);
    y+=x+1;
    printf("y+=x+1 => x=%i, y=%i\n",x,y);
    z%=y;
    printf("z%%=y => y=%i, z=%i\n",y,z);

    printf("\nOperador condicional\n");
    x=1,y=3;
    z = x>y ? x : y;
    printf("z = x>y ? x : y => x=%i, y=%i, z=%i\n",x,y,z);

    printf("\nOperador de conversao\n");
    x=10,y=3;
    float r;
    r = x/y;
    printf("Sem conversao: %d/%d = %f\n",x,y,r);
    r =(float)x/y;
    printf("Com conversao em x: %d/%d = %f\n",x,y,r);
    r =x/(float)y;
    printf("Com conversao em y: %d/%d = %f\n",x,y,r);
    r =(float)x/(float)y;
    printf("Com conversao em ambos: %d/%d = %f\n",x,y,r);

    return 0;
}