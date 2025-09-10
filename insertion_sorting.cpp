#include<iostream>
using namespace std;
void insersort(int *arr,int n){
    for(int i =1;i<n;i++){
        int curr = arr[i];
        int perv = i-1;
        while(perv >=0 && arr[perv]> curr){
            swap(arr[perv],arr[perv+1]);
            perv--;

        }
        arr[perv+1]=curr;
    }
}

int main(){
    int arr[5]={5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);
    insersort(arr,n);
    for(int k = 0 ; k<n;k++){
        cout<<arr[k]<<"   ";
    }
}