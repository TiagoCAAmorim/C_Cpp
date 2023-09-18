#include <iostream>
#include <string>
using namespace std;

template <class T>
T sum(T a, T b) {
    return a+b;
}

template <typename X> // Alternative to class
X dif(X a, X b) {
    return a-b;
}

template <class T, class U>
T smaller(T a, U b) {
    return (a < b ? a : b);
}

int main(){
   int a=1;
   int b=2;
   cout << sum(a,b) << endl;
   
   double c=1.1;
   double d=2.3;
   cout << sum(c,d) << endl;
   
   cout << dif(a,b) << endl;
   cout << dif(c,d) << endl;
   cout << smaller(1,1.7) << endl;
   cout << smaller(1,-1.7) << endl;
   cout << smaller(1.7,1) << endl;
   cout << smaller(-1.7,1) << endl;
}