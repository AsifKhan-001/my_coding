#include<iostream>
#include<string>
using namespace std;
int main(){
    int sum = 0;
    int n;
    cout<<"entre yoour number : ";
    cin>>n;
    //int fac=1;
    string s = to_string(n);
    int k = s.length();
    
    for(int i=0;i<k;i++){
        int m = s[i] - '0';
        int fac = 1;
        for(int j=1;j<=m;j++){
            fac=fac*j;


        }
        sum = sum+fac;
    }
    if(sum==n){
        cout<<n<<" is a STRONG NUMBER";

    }
    else{
        cout<<n<<" is NOT STRONG NUMBER";
    }
    
}