#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Initialize a 2D vector "v" by passing some values
    vector<vector <int> > v{{1,2,3},
                            {4,5,6},
                            {7,8,9}};

    // Output the array 
    for (int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout << v[i][j];
        cout << endl;
        }
    }

    // cout << '...................................';
    /*******************************************/

    vector<vector <int> > vin;
    int temp;

    // Input the array
    for(int i=0 ; i<3; i++){
        
        for(int j=0; j<4; j++){
            cin >> temp;
            vin[i].push_back(temp);
        }
    }
    // cout << '...................................';

    // output the array
    for (int i=0; i<vin.size(); i++){
        for(int j=0; j<vin[i].size(); j++){
            cout << vin[i][j];
        cout << endl;
        }
    }
}