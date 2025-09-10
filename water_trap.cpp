#include<iostream>
using namespace std;
int mytrap(int *trap,int n){
    int leftmax[20000],rightmax[20000];
    leftmax[0]=trap[0];
    rightmax[n-1]=trap[n-1];
    for(int i=1;i<n;i++){
        leftmax[i]=max(trap[i-1],leftmax[i-1]);   
    }
    for(int i = n-2; i>=0 ;i--){
        rightmax[i]=max(rightmax[i+1],trap[i+1]);
    }
    int watertrap=0;
    for(int j=0;j<n;j++){
        int currtrap=min(leftmax[j],rightmax[j]) - trap[j];
        if(currtrap>0){
            watertrap=watertrap+currtrap;
        }
        
    }
    return watertrap;
}

    

int main(){
    int trap[7]={4,2,0,6,3,2,5};
    int n = sizeof(trap)/sizeof(int);
    cout<<mytrap(trap,n);
}