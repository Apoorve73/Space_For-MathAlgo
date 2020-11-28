/*
 * This code illustrates how to use:
 * default constructor
 * parameterised container using Initializer List
 * explicit function declaration
 * 
*/

#include <iostream>
#include <string>
using namespace std;


// class definition
class Space

{
    private:
        string sat;
        string launch_dt;

    public:
        
        Space();    //default constructor
        Space(string s, string ld): sat(s), launch_dt(ld) {}    // parameterized constructor, using Initializer List

        void printInfo();   // Function call
};  

// explicit function declaration
void Space::printInfo(){
    cout<< "The satellite " << sat << " was launched on " << launch_dt <<".\n";
}

int main(){

    Space sp_1("'Earth observation satellite (EOS-01)'", "7th November 2020");  // object intialization
    sp_1.printInfo();

}
