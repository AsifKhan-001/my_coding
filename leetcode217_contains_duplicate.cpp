#include<iostream>
using namespace std;
int appear(int *nums,int n){
    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                flag=1;
                
            }
            
        }
    }
    if(flag==0){
        cout<<"False";
    }
    else{
        cout<<"True";
    }
    return 0;
}
int main(){
    int nums[10]={1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(nums)/sizeof(int);
    appear(nums,n);
}