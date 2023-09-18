#include <iostream>
#include <string>
using namespace std;

class MyClass {
    public:
        MyClass() {
           regVar = 0;
        }
        void printInfo() {
            cout << regVar <<endl;
            cout << this->regVar <<endl;
            cout << (*this).regVar <<endl; 
        }
    private:
        int regVar;
        
        friend void someFunc(MyClass &obj);
};

void someFunc(MyClass &obj) {
  obj.regVar = 42;
  cout << "New value: " << obj.regVar <<endl;
}

int main(){
    MyClass obj;
    obj.printInfo();
    someFunc(obj);
    obj.printInfo();
}
