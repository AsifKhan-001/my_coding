#include<iostream>
using namespace std;
void rotate(int *nums,int n,int index){
    int arr[n];
    int x=0;
    for(int i=index;i<n;i++){
        arr[x]=nums[i];
        x=x+1;
        int m=x;
        for(int j=0;j<index;j++){
            arr[m]=nums[j];
            m=m+1;
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" , ";
    }
    
}

int main(){
    int nums[7]={0,1,2,4,5,6,7};
    int n = sizeof(nums)/sizeof(int);
    int index = 3;
    rotate(nums,n,index);
    
}