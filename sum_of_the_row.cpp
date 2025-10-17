#include<iostream>
using namespace std;
void sumofelement(int mat[][3],int n,int m){
    int sum=0;
    for(int i=1;i<2;i++){
        for(int j=0;j<m;j++){
            sum=sum+mat[i][j];
        }
    }
    cout<<"The sum of 2nd row element is : "<<sum;

}


int main(){
    int mat[3][3]={{1,4,9},
                   {11,4,3},
                   {2,2,3}};
    sumofelement(mat,3,3);
}