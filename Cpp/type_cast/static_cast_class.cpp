#include<iostream>
using namespace std;
class Base {};
class Derived : public Base {};
class MyClass {};
main(){
   Derived* d = new Derived;
   Base* b = static_cast<Base*>(d); // this line will work properly
   //MyClass* x = static_cast<MyClass*>(d); // ERROR will be generated during compilation
}