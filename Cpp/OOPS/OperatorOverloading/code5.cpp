/*
 * This program illustrates 
 * conditional operator overloading 
 * along with overloading of + 
 */

// Calculate SUM and DIFFERENCE of Ages

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

class Age{
    int age;

    public:
        Age(){
            age = 0;
        }

        Age(int a){
            age = a;
        }

        Age operator + (Age& a) const{

           int sum = age + a.age;
           return Age(sum);

        };

        bool operator < (const Age& a){

            if (age < a.age){
                return true;
            }
            
            return false;
        };

        void show() const{
            printf("Age: %d", age);
        };
};

int main(){
    Age a1(11), a2(10);
    Age a3;
    int sum;

    a3 = a1 + a2;
    a3.show();      // Age: 21
}