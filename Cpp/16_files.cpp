#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
    Mode          Description
    ios::app      append to end of file
    ios::ate      go to end on opening file
    ios::binary   open in binary mode
    ios::in       open in read only
    ios::out      open for write only
    ios::trunc    delete contents if file exists
*/

int main(){
    ofstream MyFile;
    MyFile.open("test.txt");

    if (MyFile.is_open()) {
        MyFile << "This is awesome! \n";
        MyFile.close();
    } else {
        cout << "Something went wrong";
    }

    ofstream MyFile2("test2.txt", ios::out | ios::app );
    MyFile2 << "My second file!! \n";
    MyFile2.close();

    string line;
    ifstream MyFile3("test2.txt");
    cout << "test2.txt contents:" <<endl;
    while ( getline (MyFile3, line) ) {
        cout << line << '\n';
    }
    MyFile3.close();
}