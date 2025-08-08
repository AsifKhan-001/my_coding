#include<iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    cout<<"entre the your number 1 :";
    cin>>n1;
    cout<<"enter the your number 2 :";
    cin>>n2;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            if((max(n1,n2))*i == (min(n1,n2))*j){
                cout<<"your lcm is : "<<(max(n1,n2))*i;
                return 0;
            }
        }


    }
}