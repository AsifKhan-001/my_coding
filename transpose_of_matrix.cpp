#include<iostream>
using namespace std;
int main(){
    
    int n=2,m=3;
    int mat[2][3]={{1,2,3},
                   {4,5,6}};
    int Transmat[3][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            Transmat[j][i]=mat[i][j];
        }
    }
    for(int m=0;m<3;m++){
        for(int n=0;n<2;n++){
            cout<<Transmat[m][n] << " ";
        }
        cout<<endl;
    }
}