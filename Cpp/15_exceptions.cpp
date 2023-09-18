#include <iostream>
#include <string>
using namespace std;

int main(){
    try {
        int motherAge = 29;
        int sonAge = 36;
        if (sonAge > motherAge) {
            throw "9";
        }
    } 
    catch (int x) {
        cout<<"Wrong age values - Error catched with int: "<<x << endl;
    }
    catch (double x) {
        cout<<"Wrong age values - Error catched with double: "<<x << endl;
    }
    catch (char x) {
        cout<<"Wrong age values - Error catched with char: "<<x << endl;
    }
    catch (...) {
        cout<<"Wrong age values - Error catched with anything"<< endl;
    }

    cout << "End of program";

}