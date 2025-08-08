#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"entre your number 1 : ";
    cin>>n1;
    cout<<"enter your number 2 : ";
    cin>>n2;
    int k = min(n1,n2);
    for(int i = 2; i<=k;i++){
        if(n1%i ==0 && n2%i==0){
            cout<<"your HCF is : "<<i;
            return 0;
        }
    }




}