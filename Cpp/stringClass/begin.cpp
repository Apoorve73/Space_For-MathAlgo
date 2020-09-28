#include <iostream>
#include <string>

using namespace std;

int main(){

    string s1 = "Apoorve Goyal"; //Implicit constructor call to intialize
                                // new object with C++ string
    string s2(s1); // Explicit constructir call to initialize
                // new object with C++ string.

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    
}