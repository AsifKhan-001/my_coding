#include<iostream>
using namespace std;
int bin( int* arr , int n , int key ) {
    int st = 0,end = n-1;
    while( st<=end ){
        int mid = (st + end)/2;
        if( arr[mid]==key ){
            return mid;
        }
        else if(arr[mid] < key){
            st = mid+1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {11,12,23,34,45,56,67,78,89,90};
    int n=sizeof(arr)/sizeof(int);
    int key = 11;
    cout<<bin(arr,n,key)<<endl;
    return 0;
}