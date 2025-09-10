#include<iostream>
using namespace std;
void kadans(int* arr,int n){
    int maximum = INT_MIN;
    int cursum=0;
    for(int i = 0;i<n;i++){
        cursum=cursum+arr[i];
        maximum=max(maximum,cursum);
    
        if(cursum<0){
            cursum=0;
        }
    }
    cout<<"The Maximum SUM is: "<<maximum;

}


int main(){
    int arr[10]={12,-23,34,-45,56,-67,-78,-89,90,-100};
    int n=sizeof(arr)/sizeof(int);
    kadans(arr,n);
}