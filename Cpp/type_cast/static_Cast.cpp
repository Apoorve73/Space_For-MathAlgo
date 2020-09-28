//static cast generates temporary variable
// This is the simplest type of cast which can be used. It is a compile time cast.
// It does things like implicit conversions between types (such as int to float, or pointer to void*), 
// and it can also call explicit conversion functions (or implicit ones).
#include <iostream>
using namespace std;
int main()
{
    int prem_var = 2147483647;
    cout << "Integer : " << prem_var << '\n';
    cout << prem_var * 10 << '\n'; //Returns a negative value
    cout << "Static Var= " << static_cast<double>(prem_var) * 10;

    // int a = 10; 
    // char c = 'a'; 
  
    // // pass at compile time, may fail at run time 
    // int* q = (int*)&c;  
    // int* p = static_cast<int*>(&c); 
    return 0;
} // namespace std

