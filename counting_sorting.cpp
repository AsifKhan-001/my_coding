#include<iostream>
using namespace std;
void countsort(int *arr,int n){
    int freq[100000]={0};
    int minval=INT_MAX,maxval=INT_MIN;
    for(int i = 0;i<n;i++){
        freq[arr[i]]++;
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);
    }
    for(int i=minval,j=0;i<=maxval;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
}

int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);
    countsort(arr,n);
    for(int k=0;k<n;k++){
        cout<<arr[k]<<"    ";
    }
}