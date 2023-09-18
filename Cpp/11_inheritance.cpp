#include <iostream>
#include <string>
using namespace std;

class Mother{
    public:
        Mother(){
            cout <<"Mother constructor"<<endl;
        }
        ~Mother(){
            cout <<"Mother destructor"<<endl;
        }
        void sayHi(){
            cout << "Hi" << endl;
        }
    protected:
        int age; 
};

class Father{
    public:
        Father(){
        };
        void sayHello(){
            cout << "Hello" << endl;
        } 
};

class Daughter: public Mother, public Father{
    public: 
        Daughter(){
            cout <<"Daughter constructor"<<endl;
        }
        ~Daughter(){
            cout <<"Daughter destructor"<<endl;
        }
        void setAge(int a){
            this->age = a;
        };
        const void printAge(){
            cout << this->age << endl;
        };
};

/*
Inheritance exceptions:
    - Constructors, destructors
    - Overloaded operators
    - The friend functions
*/

int main(){
    Daughter d;
    d.sayHi();
    d.sayHello();
    d.setAge(4);
    d.printAge();
}
