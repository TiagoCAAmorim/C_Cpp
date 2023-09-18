#include <iostream>
using namespace std;

void print_double(int x){
    cout << 2*x << endl;
}

int return_double(int x){
    return 2*x;
}

double return_double(double x){
    return 2*x;
}

int vec_sum(int *p, int n=0){
    int s=0;
    for (int i=0; i<n; i++){
        s += p[i];
    }
    return s;
}

int main(){
    printf("Funcao sem retorno.\n");
    print_double(45);
    printf("Funcao com retorno.\n");
    cout << return_double(45) << endl;
    printf("Overload de funcao.\n");
    cout << return_double(45.55) << endl;
    printf("Parametro opcional.\n");
    int p[3] = {1,2,3};
    cout << vec_sum(p) << endl;
    cout << vec_sum(p,3) << endl;
}