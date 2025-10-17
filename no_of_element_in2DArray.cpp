#include<iostream>
using namespace std;
void NoOfElement(int mat[][3],int n,int m){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==7){
                count++;
            }
        }
    }
    cout<<"The No. of the 7's is : "<<count;
}

int main(){
    int mat[2][3]={{4,7,8},
                   {7,8,9}};
    NoOfElement(mat,2,3);
}