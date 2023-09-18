#include "MyClass.h"
#include <iostream>
using namespace std;

MyClass::MyClass(){
   cout << "Constructor" << endl;
}

MyClass::~MyClass(){
   cout << "Destructor" << endl;
}

void MyClass::myPrint() const {
  cout <<"Hello"<<endl;
}