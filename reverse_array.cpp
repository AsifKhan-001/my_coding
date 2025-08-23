#include<iostream>
using namespace std;
//REVERSE THE ARRAY WITHOUT EXTRA SPACE

int main(){
    int arr[7] = {12,23,34,56,78,90,100};
    int n = sizeof(arr)/sizeof(int);
    int a;
    int b;
    int j=0;
    if(n%2==0){
        for(int i = n-1 ; i >= n/2 ; i--){
            a=arr[i];
            b=arr[j];
            arr[j]=a;
            j=j+1;
            arr[i]=b;

        }

    }
    else{
      for(int i = n-1 ; i >= (n-1)/2 ; i--){
            a=arr[i];
            b=arr[j];
            arr[j]=a;
            j=j+1;
            arr[i]=b; 
      } 
    }

    
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" , ";
    }

}