#include<iostream>
using namespace std;
// int main(){
//     int maximum=INT_MIN;
//     int arr[5]={1,-2,3,4,-5};
//     int n = sizeof(arr)/sizeof(int);
//     for(int i = 0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int cursum=0;
//             for(int k=i;k<=j;k++){
//                 cursum = cursum + arr[k];
                
//             }
//             maximum = max(maximum,cursum);
            
//         }
        
//     }
//     cout<<"maximum array sum is: "<<maximum;
//     return 0;
// }




// OPTAMIZIED APPROACH



int main(){
    int maximum=INT_MIN;
    int arr[5]={1,-2,35,4,-5};
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0;i<n;i++){
        int cursum=0;
        for(int j=i;j<n;j++){
            cursum=cursum+arr[j];
            maximum = max(maximum,cursum);
            
        }
        
    }
    cout<<"maximum array sum is: "<<maximum;
    return 0;
}