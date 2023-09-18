#include <iostream>
using namespace std;

int main(){
    printf("Pointer para variaveis\n");
    int age = 12;
    int *p = &age;

    cout << *p << endl;
    *p = 5;
    cout << age << endl;
    cout << &age << endl;
    cout << endl;

    printf("Array dinamico\n");
    int *v = new int[age];
    for (int i=0; i<age; i++){
        v[i] = i*i;
    }
    for (int i=0; i<age; i++){
        cout << v[i] << " ";
    }
    cout << endl;

}