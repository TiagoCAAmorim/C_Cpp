/*
 * nome: exemplo01.c
 * descrição: primeiro exemplo em C
 * data: 17/08/2012
 */
#include <stdio.h>
int main()
{    
    printf("\nDeclaracao e inicializacao de variaveis\n");
    int contador=0;
    int x=1,y=1;
    char c;
    c='x';

    printf("contador=%d\n",contador);
    printf("x=%d, y=%d\n",x,y);
    printf("c=%c\n",c);

    printf("\n\nTamanho de Variaveis inteiras\n");
    printf("\nInteiras\n");
    printf("short int = %lu bytes (%lu bits)\n", sizeof(short int), sizeof(short int)*8);
    printf("unsigned short int = %lu bytes (%lu bits)\n", sizeof(unsigned short int), sizeof(unsigned short int)*8);
    printf("long int = %lu bytes (%lu bits)\n", sizeof(long int), sizeof(long int)*8);
    printf("unsigned long int = %lu bytes (%lu bits)\n", sizeof(unsigned long int), sizeof(unsigned long int)*8);
    printf("long long int = %lu bytes (%lu bits)\n", sizeof(long long int), sizeof(long long int)*8);
    printf("unsigned long long int = %lu bytes (%lu bits)\n", sizeof(unsigned long long int), sizeof(unsigned long long int)*8);

    printf("\nPonto flutuante\n");
    printf("float = %lu bytes (%lu bits)\n", sizeof(float), sizeof(float)*8);
    printf("double = %lu bytes (%lu bits)\n", sizeof(double), sizeof(double)*8);
    printf("long double = %lu bytes (%lu bits)\n", sizeof(long double), sizeof(long double)*8);

    printf("\nCaractere\n");
    printf("char = %lu bytes (%lu bits)\n", sizeof(char), sizeof(char)*8);
    printf("unsigned char = %lu bytes (%lu bits)\n", sizeof(unsigned char), sizeof(unsigned char)*8);
    printf("wchar_t = %lu bytes (%lu bits)\n", sizeof(wchar_t), sizeof(wchar_t)*8);

    printf("\nVariaveis nulas\n");
    printf("void = %lu bytes (%lu bits)\n", sizeof(void), sizeof(void)*8);

    // Literais Inteiros
    // Números na base 10: 
    //     0 , 1 , 3 ... 10 , 11 ... , 100 , -100
    // Números na base octal inicia com 0: 
    //    0, 01, 03, 07, 10, 011, ..., 100, -0100
    // Números na base hexadecimal inicia com 0x: 
    //    0x0, 0x1, 0xa, 0xb, 0x10...0x100, -0x100
    // Long usa um l ou L como sufixo e long long usa dois: 
    //    1l, 3L, 07L, 0xal, 0x100LL, -0x100LL
    // Unsigned usa um u ou U como sufixo: 
    //    1u, 3U, 07U, 0xau, 0x100U, -0x100U

    // Literais de Ponto Flutuante
    // Números na base 10
    //    0.5 , 5.0 , 5.
    // Números long double
    //    0.5L, 5.0L, 5.L
    // Notação cientifica
    //    0.5e10, 5.0e2, 5.E3
    // Base hexadecimal iniciamos com 0x
    //    0x0.5p0 , 0x5.0p1 , 0x5.p0

    // Literais de Caractere e String
    // Letras
    //    'a', 'b', 'c'
    // Sequencias de escape
    //    '\'', '\”', '\?\'
    // Código octal e hexadecimal
    //    '\0141', '\x61'
    // String usa aspas duplas
    //    “Bom dia”

    printf("\n\nPrintf e tipos de dados\n");
    printf("i ou d: inteiro -> %d\n",-256);
    printf("u: Inteiro sem sinal -> %u\n",-256);
    printf("hu: short int -> %hu\n",1230000000);
    printf("lu: long int -> %lu\n",1230000000);
    printf("llu: long long int -> %llu\n",1230000000);
    printf("f: double/float -> %f\n",3.14159265358979323846);
    printf("Lf: long double -> %Lf\n",3.14159265358979323846L);

    return 0;
}