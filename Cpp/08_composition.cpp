#include <iostream>
#include <string>
using namespace std;

class Birthday {
    public:
        Birthday(int m, int d, int y);
        void printDate();
    private:
        int month;
        int day;
        int year;
};

class People{
    public:
        People(string n, Birthday b);
        void printInfo();
    private:
        int birthMonth, birthDay, birthYear;
        string name;
        Birthday bd;
};

Birthday::Birthday(int m, int d, int y): month(m), day(d), year(y){ 
};

void Birthday::printDate()  {
   cout << month << "/" << day << "/" << year << endl;
};

People::People(string n, Birthday b): name(n), bd(b){
}

void People::printInfo(){
    cout << name << endl;
    bd.printDate();
}

int main(){
    People person1("Lucy", Birthday(11, 02, 2010));
    person1.printInfo();
}