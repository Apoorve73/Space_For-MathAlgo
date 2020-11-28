// Program to check for errors on trying to 
// modify constant value

#include <iostream>

using namespace std;

void aFunc(int&a, const int&b);
main(){
    int a = 7, b = 11;
    aFunc(a, b);
    return;
}

void aFunc(int&a, const int&b)
{
    a=12;
    b=85; // ERROR! Cant modify constant argument
}