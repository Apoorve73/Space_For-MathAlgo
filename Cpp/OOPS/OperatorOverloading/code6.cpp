/* 
 * PROGRAM to show CONVERSION operator
 * use for Object conversion
*/

/*
 * NOTE:
 * 
 * If there is any const variable in the class
 * then basic type to user defined conversion will give an error
 * 
*/

#include <iostream>

using namespace std;

// Class definition
class Average {

    private:
        int num1, num2;
        float avg;

    public:
        Average() : num1(0), num2(0), avg(0.0) {}

        Average(int n1, int n2){
            num1 = n1;
            num2 = n2;

            avg = float(num1 + num2) / 2;
        }

        // Conversion operator for obj -> float
        operator float() {
            return avg;
        }

        // Conversion operator for obj -> int
        operator int() {
            return avg;
        }

        void display(){
            cout << "num1, num2, avg :" << num1 <<"\t"<< num2 <<"\t"<< avg << "\n"; 
        }

};

int main(){

    int res_int;
    float res_float;
    Average a1(2, 5), a2(3, 6);

    // User dfined -> Basic Type conversion
    res_float = a1; // Conversion op. searched for as a routine by compiler and on finding out, obj a1
                    // converted to float
    a1.display();
    cout << res_float << endl;
    
    res_int = static_cast<int>(a1);   // Conversion op. called using typecast does the same thing as above
                                        // but it will search for int operator
    a1.display();
    cout << res_int << endl;


}