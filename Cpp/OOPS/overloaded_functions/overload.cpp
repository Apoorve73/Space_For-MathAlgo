#include <iostream>
#include <string.h>

using namespace std;

// Declaration
void overload()     ;
void overload(string);
void overload(int, string);

// main function
int main(){

    int num = 38;
    string str = "19COB38";

    // Function Call
    overload();
    overload(str);
    overload(num, str);

}


// Function Definition
void overload(){
    cout << "I am Overload 1 and no argument is passed on to me. \n";
}

void overload(string s){
    cout << "I am Overload 2 and a string: " << s << " is passed on to me. \n";
}

void overload(int n, string s){
    cout << "I am Overload 3 and a string and a number: " << s 
         << " and " << n << " are passed on to me. \n";
}
