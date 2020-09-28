#include <iostream>
using namespace std;

void print_array(int array[5][2]){
        for (int i=0; i<5; i++){
        for(int j=0; j<2; j++)
        {
             cout << array[i][j];
        }
    }
}

int main(){
    int array[5][2];
    for (int i=0; i<5; i++){
        for(int j=0; j<2; j++)
        {
             cin >> array[i][j];
        }
    }
    print_array(array);
}