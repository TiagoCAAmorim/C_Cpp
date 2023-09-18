#include <iostream>
#include <string>
using namespace std;

template <class T>
class Pair {
    private:
        T first, second;
    public:
        Pair (T a, T b): first(a), second(b){
        }
        T bigger();
};

// Angle brackets needed if function declared outside class
template <class T>
T Pair<T>::bigger() {
    return (first > second ? first : second);
}

// Template Specialization => there is no inheritance
template <>
class Pair<string> {
    private:
        string first, second;
    public:
        Pair (string a, string b): first(a), second(b){
        }
        string bigger(){
            return (first.size() > second.size() ? first : second);
        };
};



int main(){
    int a=9, b=7;
    Pair p(a,b);
    cout << p.bigger() << endl;

    Pair <int> obj(-1,15.3);
    cout << obj.bigger() << endl;

    Pair <double> obj2(-1.13,15.57);
    cout << obj2.bigger() << endl;
    
    Pair <char> obj3('d','x');
    cout << obj3.bigger() << endl;

    // String comparison based on string length
    Pair <string> obj4("dfg","xw");
    cout << obj4.bigger() << endl;
}