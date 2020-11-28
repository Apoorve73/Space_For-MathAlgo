/*
 * Program to illustrate Overloading
 * of Extraction and Insertion operator
 * along with use if friends
 */

// Print name and college name defined in separate classes
// Use ext and ins op, for the same

#include <iostream>
using namespace std;

class Info {

    private:
        string name; // Apoorve
        string college; // "Zakir Husain College of Engineering and Technology, Aligarh Muslim University";

    public:
        
        Info(): name(""), college("") {}

        Info (string n, string clg): name(n), college(clg) {}

        // friend function call
        friend istream &operator >> (istream&c, Info& i);
        friend ostream &operator << (ostream &c, Info &i);
};

// defining the friend function
// '&' means reference to

istream &operator >> (istream &c, Info &i) 
{

    cout << "\n Enter name: "; c >> i.name;
    cout << "\n Enter college: "; c >> i.college;
    return c;
}

ostream &operator << (ostream &c, Info &i)
{

    c << i.name << "\t" << i.college << ;
    return c;

}

int main (){

    Info info1, info2;
    Info info3("Apoorve", "Zakir Husain College of Engineering and Technology, AMU");

    cout << "\n Enter the information:";

    // An overloaded >> operator
    cin >> info1 >> info2;

    // An overloaded << operator
    cout << "\n info1 = " << info1 << "\n info2 = " << info2;
    cout << "\n info3 = " << info3;
    return 0;

}

