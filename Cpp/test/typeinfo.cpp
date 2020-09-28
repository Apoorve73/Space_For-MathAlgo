#include <iostream>
#include <typeinfo>

using namespace std;
int main(){
int *p = (int*) 80;   
int *q = (int*) 40;  
cout << typeid(p).name() << '\n'; //Pi
cout << typeid(p-q).name() << '\n';    
cout << p-q << '\n'; //outputs 10 becouse 80-40 = 40 bur int takes 4 bytes therefore 40/4=10

int c = 'a';
int *t ;
int *r = (int*)&c;
int *s = &c;
cout << *r << '\n' << *s << '\n'; // Address of c
cout << typeid(r).name() << '\n' << typeid(s).name() << '\n' << typeid(t).name();   // Pi

}
