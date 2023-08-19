#include<iostream>
#include<cstring>
using namespace std;

void printAllPrefixes(char input[]){
    for(int i=0; input[i] != '\0'; i++){
        for(int j=0; j<=i; j++){
            cout << input[j];
            
        }
        cout << endl;
    }
}

int main(){

    char input[100] = "abcde";

    printAllPrefixes(input);

    for(int i=0; input[i] ='\0'; i++){
        cout << input[i];
    }


/*

    char arr[100]  = "kunal";
    char  arr1[100] = "xy";

    cout << "Before coping " << endl;
    cout << "arr : " << arr << endl;
    cout << "arr1 : " << arr1 << endl;

   // strcpy(arr, arr1);
  // strcpy(arr, "kunal");
  strncpy(arr, arr1, 8);

    cout << "After coping " << endl;
    cout << "arr : " << arr << endl;
    cout << "arr1 : " << arr1 << endl;
*/


  /*

    int len = strlen(arr);   //strlen() is used to find the length of the string 
    cout<< len << endl;
*/
/*

    //comparing two string  strcpm() function is used to compare two string 

    if(strcmp(arr, arr1)==0){
        cout << "true"  << endl;
    }else{
        cout << "false" << endl;
    }
*/



    return 0;
}