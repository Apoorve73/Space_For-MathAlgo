#include <iostream>
using namespace std;
//Alias of a char[5]
using FiveCharCode = char[5];

//'code' is a char(&)[5]
void Bar(const FiveCharCode& code) {
 for(char c : code) { //range-based-for loop works
  cout << c << "\n";
 }
}


int main() {
 char code[5] = {'A','B','C','D','E'};
  //Call Bar
 Bar(code); //No explicit length passed
 return 0;
}