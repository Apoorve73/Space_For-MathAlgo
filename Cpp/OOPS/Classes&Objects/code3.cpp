/*
 * This code illustrates how to use:
 * default constructor
 * parameterised container using Initializer List
 * explicit function declaration
 * copy constructor
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
        string l_type;

    public:
        
        Space();    //default constructor
        Space(string s, string ld): sat(s), launch_dt(ld) {}    // parameterized constructor, using Initializer List

        void testCopy(string l_t){
            l_type = l_t;
            cout << l_type << "\nThis is printed using a copy constrcutor.\n"; 
        }
        void testPrint(){
            cout << l_type << endl;
        }

        void printInfo();   // Function call

};  

// explicit function declaration
void Space::printInfo(){
    cout<< "The satellite " << sat << " was launched on " << launch_dt <<".\n";
}

int main(){

    Space sp_1("'Earth observation satellite (EOS-01)'", "7th November 2020");  // object intialization

    // one way to use copy constructor
    Space sp_2(sp_1);
    sp_2.printInfo();

    //second way to use copy constructor
    Space sp_3 = sp_1;
    sp_3.printInfo();
    sp_3.testCopy("Recent Launch");
    sp_3.testPrint();

    // prints a blank line
    sp_1.testPrint();
    sp_2.testPrint();
}

