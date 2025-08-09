#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int n;
    cout<<"entre your number: ";
    cin>>n;
    for(int i = 1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }

    }
    if(sum==n){
        cout<<"your number "<<n<<" is a PERFECT NUMBER";
    }
    else{
        cout<<"your number "<<n<<" is NOT a PERFECT NUMBER";
    }
}