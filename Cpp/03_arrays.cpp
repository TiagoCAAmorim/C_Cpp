#include <iostream>
using namespace std;

int main(){
    printf("Vetor Definido.\n");
    int vec_def[10];
    vec_def[9] = -98;
    for (int i=0; i<10; i++){
        cout << i << " = " << vec_def[i] << endl;
    }
    cout << endl;

    printf("Uso do for-each.\n");
    int i=0;
    for (auto x: vec_def){
        cout << i << " = " << vec_def[i] << endl;
        i++;
    }
    cout << endl;

    printf("Matriz Definida.\n");
    int mat_def[5][3];
    for (int i=0; i<5; i++){
        for (int j=0; j<3; j++){
            mat_def[i][j] = i+j;
        }
    }
    for (int i=0; i<5; i++){
        cout << "| ";
        for (int j=0; j<3; j++){
            cout << mat_def[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << endl;
   
}