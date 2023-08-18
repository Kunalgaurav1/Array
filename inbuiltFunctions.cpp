#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char arr[100], arr1[100];
   
   cin.getline(arr, 100);
   cin.getline(arr1, 100);
  /*

    int len = strlen(arr);   //strlen() is used to find the length of the string 
    cout<< len << endl;
*/

    //comparing two string  strcpm() function is used to compare two string 

    if(strcmp(arr, arr1)==0){
        cout << "true"  << endl;
    }else{
        cout << "false" << endl;
    }


    return 0;
}