#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"entre your number: ";
    cin>>n;
    cout<<"your strong numbers are: ";
    for(int x=1;x<=n;x++){
        
        int sum=0;
        string s = to_string(x);
        int k = s.length();
    
        for(int i=0;i<k;i++){
            int m = s[i] - '0';
            int fac = 1;
            for(int j=1;j<=m;j++){
                fac=fac*j;


            }
            sum = sum+fac;
        }
        
        if(sum==x){
            cout<<x<<" , ";

        }
        
    
    }
        
}