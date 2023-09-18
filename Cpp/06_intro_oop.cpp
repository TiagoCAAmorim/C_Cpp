#include <iostream>
using namespace std;

class Student{
    private:
        string name="???";
    public:
        Student(){
            cout << "Hello!" << endl;
        }
        Student(string name){
            cout << "Hello " << name << "!" << endl;
            set_name(name);
        }
        void set_name(string n){
            name = n;
        }
        string get_name(){
            return name;
        }
};

int main(){
    printf("Instanciar nova classe.\n");
    Student new_student("John");
    cout << "Name: " << new_student.get_name() << endl;
    Student new_student2;
    cout << "Name: " << new_student2.get_name() << endl;
}