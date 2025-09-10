// NOT POSSIBLE BY SWAPPING

#include<iostream>
using namespace std;
void rotate(int *nums,int n,int index){
    int x=0;
    for(int i=index;i<n;i++){
        int set =nums[x];
        nums[x]=nums[index];
        nums[index]=set;
        x=x+1;
    }
    for(int k=0;k<n;k++){
        cout<<nums[k]<<" , ";
    }
    
}

int main(){
    int nums[7]={0,1,2,4,5,6,7};
    int n = sizeof(nums)/sizeof(int);
    int index = 3;
    rotate(nums,n,index);
    
}