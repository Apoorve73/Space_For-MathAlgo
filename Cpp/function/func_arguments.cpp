#include <iostream>
#include <string>

using namespace std;

// declaration
void default_arg(string = "None", int = 0);

int main(){

    // call with arguments
    default_arg("Apoorve Goyal", 38);
    // call without arguments
    default_arg();
    // call with anyone argument
    default_arg("Not None");
}

// definition
void default_arg(string s, int n){
    
    cout << "Output String: " << s << endl;
    cout << "Output Number: " << n << endl;
    cout << "__________________________\n";

}