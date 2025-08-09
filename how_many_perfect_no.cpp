#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=0;
    //int arr[2];
    int n;
    //int sum=0;
    cout<<"entre your number from 1 till n: ";
    cin>>n;
    cout<<"your perfect number till "<<n<<" is : ";
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=1;j<=i/2;j++){
            
            if(i%j==0){
                sum=sum+j;

            }
        }
        if(i==sum){
            //arr[a]=i;
            //a=a+1;
            cout<<i<<" , ";
            sum=0;
        }

        }
    
}
    /*cout<<"your perfect numbers is ";
    for(int n=0;n<2;n++){
        cout<<arr[n]<<" , ";
    }*/

