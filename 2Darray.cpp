#include<iostream>
using namespace std;

int main(){

    int m, n;
    cin >> m >> n;

    int arr[m][n];
    
    //taking input 
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    cout << "printing 2d array" << endl;
    

    //printing array
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}