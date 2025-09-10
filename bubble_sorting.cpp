#include<iostream>
using namespace std;
void bubsort(int *num,int n){
    for(int i = 0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(num[j]>num[j+1]){
                swap(num[j],num[j+1]);
            }
        }
    }
}
int main(){
    int num[5] = {5,4,2,3,1};
    int n = sizeof(num)/sizeof(int);
    bubsort(num,n);
    for(int k=0;k<n;k++){
        cout<<num[k];
    }
}