#include <iostream>
#include <string>
using namespace std;

class Enemy {
    protected: 
        int attackPower;
    public:
        void setAttackPower(int a){
            attackPower = a;
        }
        virtual void attack() = 0;  // Pure virtual function
};

class Ninja: public Enemy {
    public:
        void attack() {
            cout << "Ninja! - "<<attackPower<<endl;
        }
};

class Monster: public Enemy {
    public:
        void attack() {
            cout << "Monster! - "<<attackPower<<endl;
        }
};

int main(){
    Ninja n;
    Monster m; 
    // Enemy e; // Cannot instatiate abstrac classes (has a pure virtual function)

    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->setAttackPower(20);
    e2->setAttackPower(80);

    n.attack();
    m.attack();

    e1->attack();
    e2->attack();

    Enemy *enemies[] = {e1,e2};

    for(int i=0;i<2;i++){
       enemies[i]->attack();
    }
}