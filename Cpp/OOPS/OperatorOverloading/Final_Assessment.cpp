#include <iostream>
#include <cstdio>
using namespace std;

class Learn {

    private:
        string subject;
        int sem;
    
    public:
        Learn() : subject(""), sem(0) {
            printf("\nDEFAULT CONSTRUCTOR CALL!");
        }

        Learn(string sub, int s): subject(sub), sem(s) {
            printf("\nTwo Argument Prameterized Constructor CALL!");
        }

        void display(){
            cout << "\n Subject: " << subject << "\t Semester: " << sem << '\n';
        }

        bool operator == (const Learn &l){

            printf("\nBOOL Operator CALLED!");
            if (subject == l.subject && sem == l.sem) {
                return true;
            }
            return false;
        }

        friend istream& operator >> (istream &c, Learn &i);
        friend ostream& operator << (ostream &c, Learn &i);

};

// defining the friend function
// '&' means reference to

istream &operator >> (istream &c, Learn &l) 
{

    printf("\nINSERTION OPERATOR CALL!");
    cout << "\n Enter subject: "; c >> l.subject;
    cout << "\n Enter semester: "; c >> l.sem;
    return c;
}

ostream &operator << (ostream &c, Learn &l)
{

    printf("\nEXTRACTION OPERATOR CALL!");
    c << l.subject << "\t" << l.sem << '\n';
    return c;

}

int main()
{
    Learn lrn1, lrn2;
    Learn lrn3("OOPs", 3);

    // Extraction and Insertion operator overloading
    cin >> lrn1;
    cout << "\n lrn1 : " << lrn1;

    // Assignment Op. overloading
    lrn2 = lrn1;
    cout << "\nObject2 formed using overloading of assignment operator.";

    // Bool operator Overloading
    if ( lrn2 == lrn3 ){
        cout << "\nBoth object2 and 3 are same!\n";
    }
    else{
        cout << "\nObject 2 and 3, NOT SAME!\n";
    }

}
