#include <iostream>
// #include "myClass.h"
using namespace std;

class MyClass{
    public:
        MyClass();
        MyClass(int a, int b);
        ~MyClass();
        void myPrint() const;
    private:
        int regVar;
        const int constVar;
};

MyClass::MyClass(): regVar(1), constVar(0){
    cout<<"Constructor: "<< regVar << " + " << constVar << endl;
}

MyClass::MyClass(int a, int b): regVar(a), constVar(b){
    cout<<"Constructor: "<< regVar << " + " << constVar << endl;
}

MyClass::~MyClass(){
    cout<<"Destructor: "<< regVar << " + " << constVar << endl;
}
void MyClass::myPrint() const {
  cout <<"Hello: " << regVar << " + " << constVar << endl;
}


int main(){
    MyClass obj;
    MyClass *ptr = &obj;
    const MyClass obj_const(3,4);

    obj.myPrint();
    ptr->myPrint();
    obj_const.myPrint();

    MyClass* obj_new = new MyClass;
    obj_new->myPrint();
    delete obj_new;   
    obj_new->myPrint();
    obj_new = nullptr;
    // obj_new->myPrint();

    obj_const.myPrint();
}