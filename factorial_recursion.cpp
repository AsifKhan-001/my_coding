#include<iostream>
using namespace std;
int factorial(int n){
    
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
        
        
    
}
int main(){
    
    int s;
    cout<<"Entre your number: ";
    cin>>s;
    int result;
    result = factorial(s);
    cout<<result;
    
}