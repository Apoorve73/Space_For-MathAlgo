/*
 * This program is to illustrate
 * Overloading of Unary Operators 
 * FOR POSTFIX OPERATION
 * with Return values
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
        Counter(int c) : count(c)
        {}

        unsigned int get_count()
        {
            return count;
        }

        Counter operator++ () // increment (postfix)
        {
            return Counter(count++);
        }
};


int main(){

    Counter c1, c2;

    cout << "\n c1= " << c1.get_count();    
    cout << "\n c2= " << c2.get_count();

    ++c1;
    c2 = ++c1;
   

    cout << "\n c1= " << c1.get_count();    
    cout << "\n c2= " << c2.get_count();

}
