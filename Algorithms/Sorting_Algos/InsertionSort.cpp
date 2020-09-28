#include <bits/stdc++.h>
using namespace std;


void insertionSort(vector<int> &v){

    int n = v.size();
    int j, key;

    for(int i = 1; i < n; i++ ){

        key = v[i]; // Set the current element as key
        j = i-1;    // Set j to i-1 since i is starting from 1

        while ( j>=0 && v[j] > key){    // Run the loop till key < v[i-1] and i-1>= 0
            v[j+1] = v[j];              // Shift elements one place ahead for the above condition
            j = j - 1;                  // Decrement j by one
        }

        v[j+1] = key;                   // Set the key at the empty index
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
    vector<int> vec{20,1,3,4,0,8,2};
    insertionSort(vec);
    printVector(vec);
}
