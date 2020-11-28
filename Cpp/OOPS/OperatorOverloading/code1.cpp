/*
 * This program is to illustrate
 * Overloading of Unary Operators 
 * Without Return values
*/
#include <iostream>
using namespace std;

class Counter
{
    private:
        unsigned int count;
    
    public:
        Counter(): count(0)
        {}

        unsigned int get_count()
        {
            return count;
        }

        void operator++ ()  // increment (prefix) 
        // it is non-return type of member function
        {
            ++count;
        }
};


int main(){

    Counter c1, c2;

    cout << "\n c1= " << c1.get_count();    
    cout << "\n c2= " << c2.get_count();

    ++c1;
    ++c2;
   

    cout << "\n c1= " << c1.get_count();    
    cout << "\n c2= " << c2.get_count();

}
