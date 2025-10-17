#include<iostream>
using namespace std;

bool ispalindrome(char str[],int n){
    int st=0,end=n-1;
    while(st<end){
        if(str[st++] != str[end--]){
            cout<<"NOT VALID PALINDROME";
            return false;
        }

    }
    cout<<"VALID PALINDROME";
    return true;
}

int main(){
    char work[]="racecar";
    ispalindrome(work,strlen(work));
    
}
