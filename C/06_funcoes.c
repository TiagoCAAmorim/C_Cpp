/*
  Funcoes
 */
int var_a=10;
#include <stdio.h>
#include <stdbool.h>

void inc(int x)
{
    x++;
}
void dec(int x)
{
    x--;
}
int sum(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}

bool is_odd_number(int x)
{
    return x%2;
}

bool is_odd_number_debug(int x)
{
    if (is_odd_number(x)){
        printf("%d e impar.\n", x);
        return true;
    } else {
        printf("%d e par.\n", x);
        return false;
    }
}

long int sum_first_numbers(int n)
{
    long int s=0;
    int i=1;
    while (i<=n){
        s+=i++;
    }
    return s;
}

long int sum_first_numbers_debug(int n){
    long int s1, s2;
    s1 = sum_first_numbers(n);
    s2 = n * (n+1) / 2;
    if (s1!=s2){
        printf("Erro no calculo!\nValor calculado: %lu. Valor real: %lu\n",s1,s2);
        return -1;
    } else {
        printf("Soma dos primeiros %d numeros: %lu\n",n,s1);
        return s1;
    }
}

unsigned long long int factorial(int n){
    if (n==1){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

unsigned long long int factorial_debug(int n){
    printf("%d! = %llu\n",n,factorial(n));
}

typedef enum {verde, azul, vermelho, roxo} tcores;
int print_color(tcores cor){
    switch(cor){
        case 0: printf("A cor #%d e verde.\n", cor); break;
        case 1: printf("A cor #%d e azul.\n", cor); break;
        case 2: printf("A cor #%d e vermelho.\n", cor); break;
        case 3: printf("A cor #%d e roxo.\n", cor); break;
        default: printf("Cor #%d nao existe.\n", cor); 
    }
    return cor;
}

int main()
{
    int x=1,y=2,z=3;
    printf("Valores iniciais: x=%d, y=%d, z=%d\n", x,y,z);
    inc(x);
    dec(y);
    printf("inc(x) e dec(y):  x=%d, y=%d, z=%d\n", x,y,z);
    printf("  Nao altera o valor da variavel!\n");
    z = sub(x,y);
    printf("sub(x,y):         x=%d, y=%d, z=%d\n", x,y,z);

    is_odd_number_debug(x);
    is_odd_number_debug(y);
    is_odd_number_debug(z);

    for(int i=1; i<=20; i++){
        sum_first_numbers_debug(i);
    }

    for(int i=1; i<=20; i++){
        factorial_debug(i);
    }

    tcores cor;
    cor=verde;
    print_color(cor); 
    cor=roxo;
    print_color(cor); 

    return 0;
}