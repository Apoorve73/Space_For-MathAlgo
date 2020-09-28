#include <iostream>
#include <vector>
using namespace std;

void swap( int *x, int *y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

void bubbleSort(vector<int> &v){
    
    bool swapped;   //   It will keep check if the list is sorted
    int size = v.size();    // size of vector

    for( int i=0; i<size-1 ; i++){
        swapped = false;    // set to false for each iteration
        for(int j=0; j<size-i-1 ; j++){ 

            if( v[j] > v[j+1]){
                swap(&v[j], &v[j+1]);   // swap elements
                swapped = true;         // set to true, beacause, swapping is performed
            }
            
        }

        if (swapped == false) {
            // if no swapping done in the iteration, break from the loop
            break;  
        }
    }
}

void printVector(vector <int> v_print){
    // print Vector Array
    cout << '{' << ' ' ;
    for (int i=0 ; i<v_print.size() ; i++){
        cout << v_print[i] << ' ';
    }
    cout << '}';
}

int main(){

    // declaration of vector array
    vector<int> vec{20,1,3,4,0,8,2};

    // call bubbleSort Function
    bubbleSort(vec);
    // print vector
    printVector(vec);
}