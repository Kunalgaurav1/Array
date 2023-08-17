
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

// length of charArray
/*

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
*/

//char Array palindrome

/*
#include<iostream>

using namespace std;

bool checkPalindrome(char str[]) {
    // Write your code here
    int count =0;
    for(int i=0; str[i] != '\0'; i++){
        count ++;
    }

    int startIndex = 0; 
    int endIndex = count;

    while(startIndex<endIndex){
        if(str[startIndex] != str[endIndex]){
            return 0;
        }

        startIndex++;
        endIndex--;
    }

    return 1;
}

int main(){
    char str[100];
    cin >> str;

   int ans =  checkPalindrome(str);

   cout << ans << endl;


    return 0;
}

*/

// using getline function
/*

#include<iostream>
using namespace std;

int main(){

    char input[100];

    cin.getline(input,100, 'l');
    cout << input << endl;

    
    return 0;
}
*/

#include<iostream>

using namespace std;

int length(char input[]){

    int count =0;

    for(int i=0; input[i] != '\0'; i++){
        count ++;
    }

    return count;

}

void reverseString(char input[]){

    int len = length(input);

    int startIndex = 0; 
    int endIndex = len-1;

    while(startIndex < endIndex){
         int temp = input[startIndex];
         input[startIndex] = input[endIndex];
         input[endIndex] = temp;

         startIndex++;
         endIndex--;

    }

}

int main(){

    char input[100];
    cin.getline(input, 100);

    reverseString(input);

    for(int i=0; input[i] != '\0'; i++){
        cout << input[i]  ;
    }

    cout << endl;

    return 0;
}