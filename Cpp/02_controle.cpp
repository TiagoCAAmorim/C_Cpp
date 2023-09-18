#include <iostream>
using namespace std;

int main(){
    int x=7;

    printf("Comando if-else\n");
    // cout << "Entre um inteiro: ";
    // cin >> x;
    cout << "x = " << x << endl;
    if (x>10){
        cout << "Maior que dez!" << endl;
    } else if (x<10){
        cout << "Menor que dez!" << endl;
    } else {
        cout << "Igual a dez!" << endl;
    }

    if (0<=x && x<=10){
        cout << "Entre zero e dez!" << endl;
    } else if(x<-99 || x>99){
        cout << "Tem 3 digitos ou mais." << endl;
    }
    cout << endl;

    printf("Comando for\n");
    for (int i=10; i>=0; i--){
        if (i==5){
            cout << "#$! ";
            continue;
        }
        cout << i << " ";
        if (i==3){
            cout << "#Erro na bomba!#";
            break;
        } else if (i==0){
            cout << "BUM";
        }
    }
    cout << endl << endl;

    printf("Comando while\n");
    while (x > 0){
        cout << x << ", ";
        if (x > 10){
            x -= 10;
        } else{
            x--;
        }
    }
    cout << "BUM?" << endl << endl;

    printf("Comando do-while\n");
    do {
        cout << x << ", ";
        if (x > 10){
            x -= 10;
        } else{
            x--;
        }
    } while (x >= 0);
    cout << "BUM!" << endl << endl;

    printf("Comando switch\n");
    x = 2;
    string s;
    switch (x){
        case 1:
            s = "Um";
            break;
        case 2:
            s = "Um";
            break;
        default:
            s = "Erro";
    }
    cout << "Mensagem: " << s << endl << endl;
}