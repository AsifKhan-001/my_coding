#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[4]={2,7,11,15};
    int sum=9;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if((arr[i]+arr[j]==sum)){
                cout<<"The indices are : "<<i<<" X "<<j;
                return 0;
            }

        }
    }
}