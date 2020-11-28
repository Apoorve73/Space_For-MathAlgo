#include <iostream>
#include <string>
using namespace std;


// class definition
class Faang

{
    private:
    // private data members
        string fkrt;
        string amzn;
    public:
        void getName(){
            cout << "Enter SDE's Name: ";
            getline(cin, fkrt);
            cout << "Enter SDA's Name: ";
            getline(cin, amzn);
        }

        void printName(){
            if (fkrt == "Apoorve"){
                cout << "\nCongratulations! You are an SDE!";
            }
            else if (amzn == "Apoorve"){
                cout << "\nCongratulations! You are an SDA!";
            }
            else{
                cout << "\n Congratulations! You will now get to know about APOORVE GOYAL.\n >> https://www.linkedin.com/in/apoorve-goyal/";
            }
            
        }

};  

int main(){
    Faang f1;
    f1.getName();
    f1.printName();
}
