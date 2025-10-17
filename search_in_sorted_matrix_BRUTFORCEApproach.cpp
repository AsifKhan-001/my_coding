#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
                   {32,33,39,50}};
    int key=50;
    int n=4,m=4;
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                cout<<"your key found at "<<i<<"X"<<j;
            }
        }
    }
    return 0;
}