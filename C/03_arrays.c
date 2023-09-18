/*
  Uso de arrays, struct, union, enum e typedef
 */
#include <stdio.h>
int main()
{
    int vetorEstatico[10];
    short int n = 5;
    int vetorVariableLength[n];
    short int i, j;

    printf("\nVetor inicializa com valores aleatorios\n");
    for(i=0; i<10; i++){
        printf("%d. -> %ld\n",i, vetorEstatico[i]);
    }
    vetorEstatico[0] = 12;

    printf("\nFor com o vetor de tamanho variavel\n");
    for(i=0; i<n; i++){
        vetorVariableLength[i] = i*i;
        printf("%d^2 = %ld\n",i, vetorVariableLength[i]);
    }


    printf("\nInicializacao de Vetores com Literais Compostos\n");
    int dataNascimento[3]={3, 1, 1978};
    printf("Data de nascimento: %u/%u/%u\n", dataNascimento[0], dataNascimento[1], dataNascimento[2]);

    printf("\nString e um vetor de caracteres\n");
    char nome [ ] = "Tiago Amorim";
    printf("Nome completo: %s\n",nome);
    printf("Primeira letra do nome: %c\n",nome[0]);
    char stringGrande [256] = "www.google.com";
    // stringGrande = "www.google.com";
    printf("String grande: '%s'\n",stringGrande);

    float matriz2D[3][3];
    matriz2D[0][0] = 11l;
    matriz2D[0][1] = 12l;
    matriz2D[0][2] = 13l;
    matriz2D[1][0] = 21l;
    matriz2D[1][1] = 22l;
    matriz2D[1][2] = 23l;
    matriz2D[2][0] = 31l;
    matriz2D[2][1] = 32l;
    matriz2D[2][2] = 33l;

    printf("\nMariz 2D 3x3\n");
    for(i=0; i<3; i++){
        printf(" | ");
        for(j=0; j<3; j++){
            printf(" %f ",matriz2D[i][j]);
        }
        printf(" |\n");
    }

    printf("\nUso do struct\n");
    struct data{
        short int dia;
        short int mes;
        short int ano;
        float fracaoDia;
    } nascimento;
    struct data falecimento;
    struct data dataZero = {.dia=1, .mes=1, .ano=1900, .fracaoDia=0l};
    
    nascimento.dia = 28;
    nascimento.mes = 2;
    nascimento.ano = 1908;
    nascimento.fracaoDia = 0.5; // meio-dia

    falecimento.dia = 8;
    falecimento.mes = 12;
    falecimento.ano = 1947;
    falecimento.fracaoDia = 0.; // meia-noite

    printf("Nasceu em %d/%d/%d, as %f horas.\n", nascimento.dia, nascimento.mes, nascimento.ano, nascimento.fracaoDia*24.);
    printf("Morreu em %d/%d/%d, as %f horas.\n", falecimento.dia, falecimento.mes, falecimento.ano, falecimento.fracaoDia*24.);

    printf("\nUso do union\n");
    union dataU{
        short int dia;
        short int mes;
        short int ano;
        float fracaoDia;
    } dataAlfa;

    printf("Adicionando valor em dia\n");
    dataAlfa.dia = 12;
    printf("  Valor em dia: %d\n", dataAlfa.dia);
    printf("  Valor em mes: %d\n", dataAlfa.mes);
    printf("  Valor em ano: %d\n", dataAlfa.ano);
    printf("  Valor em fracaoDia: %f\n", dataAlfa.fracaoDia);
    
    printf("Adicionando valor em mes\n");
    dataAlfa.mes = 10;
    printf("  Valor em dia: %d\n", dataAlfa.dia);
    printf("  Valor em mes: %d\n", dataAlfa.mes);
    printf("  Valor em ano: %d\n", dataAlfa.ano);
    printf("  Valor em fracaoDia: %f\n", dataAlfa.fracaoDia);
    
    printf("Adicionando valor em fracaoDia\n");
    dataAlfa.fracaoDia = 0.6;
    printf("  Valor em dia: %d\n", dataAlfa.dia);
    printf("  Valor em mes: %d\n", dataAlfa.mes);
    printf("  Valor em ano: %d\n", dataAlfa.ano);
    printf("  Valor em fracaoDia: %f\n", dataAlfa.fracaoDia);

    printf("Adicionando valor em dia\n");
    dataAlfa.dia = 1;
    printf("  Valor em dia: %d\n", dataAlfa.dia);
    printf("  Valor em mes: %d\n", dataAlfa.mes);
    printf("  Valor em ano: %d\n", dataAlfa.ano);
    printf("  Valor em fracaoDia: %f\n", dataAlfa.fracaoDia);

    printf("\nUso do enum\n");
    enum cores {azul, verde, vermelho, rosa, preto};
    enum cores corOlhos;

    corOlhos = verde;
    printf("Codigo da cor dos olhos: %u\n", corOlhos);

    printf("\nUso do typedef\n");
    typedef double vetor3D[3];
    typedef struct tData {
        unsigned short int dia;
        unsigned short int mes;
        unsigned short int ano;
    } tipoData;
    typedef struct tipostruct {
        short int codigo;
        char inicialNome;
        char inicialSobrenome;
        tipoData admissao;
    } usuario;
    vetor3D posicaoInicial = {100., -25., 12.78};
    usuario novoUsuario;
    novoUsuario.codigo = 12525;
    novoUsuario.inicialNome = 'T';
    novoUsuario.inicialSobrenome = 'A';
    novoUsuario.admissao.dia = 5;
    novoUsuario.admissao.mes = 8;
    novoUsuario.admissao.ano = 2015;

    printf("Usuario: #%d (%c. %c.).\n", novoUsuario.codigo, novoUsuario.inicialNome, novoUsuario.inicialSobrenome);
    printf("Admitido em %d/%d/%d.\n", novoUsuario.admissao.dia, novoUsuario.admissao.mes, novoUsuario.admissao.ano);

    return 0;
}