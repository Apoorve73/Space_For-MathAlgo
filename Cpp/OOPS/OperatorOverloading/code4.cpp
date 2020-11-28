/*
 * Program to illustrate overloading of
 * Comparison Operator
 * in classes
*/

int FLAG = 1;

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

class Age{
    private:
        int age;
        string name;
    public:
        Age(){
            age= 0;
            name = "";
        }
        Age(int a, string n){
            age = a;
            name = n;
        }

        void displayInfo(){
            cout<< "Name: " << name << "\t Age: " << age; 
        }

        bool operator > (const Age& a){
            if (age > a.age){
                FLAG = 1;
                return true;
            }
            if (age < a.age){
                return false;
                FLAG = -1;
            }
        }

};

int main(){
    Age a1(19, "Apoorve"), a2(18, "Aniket");

    if (a1 > a2){
        printf("Apoorve is elder than Aniket");
    }
    else{
        printf("Apoorve is younger than Aniket.");
    }
}