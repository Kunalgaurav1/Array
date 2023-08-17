
/*

#include<iostream>
using namespace std;

int main(){

    char name[100];
    
    cout << "Enter you name : " << endl;
    cin >> name;

    cout << "Your name is " << name << endl;

    return 0;
}
*/


#include<iostream>

using namespace std;

int length(char arr[]){
    int count = 0;

    for(int i = 0;  arr[i] != '\0'; i++){
        count ++;
    }

    return count;
}

int main(){

    char arr[100];
    cin >> arr;

    int ans = length(arr);

    cout << ans << endl;
    return 0;
}

