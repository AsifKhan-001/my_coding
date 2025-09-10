#include<iostream>
using namespace std;
// void buysell(int *prices,int n){
//     int bestbuy[100000];
//     bestbuy[0]=INT_MAX;
//     for(int i=1;i<n;i++){
//         bestbuy[i] = min(bestbuy[i-1],prices[i-1]);

//     }
//     int maxprofit=0;
//     for(int j=0; j<n;j++){
//         int currprofit=prices[j]-bestbuy[j];
//         maxprofit = max(currprofit,maxprofit);
//     }
//     cout<<"maximum profit = "<<maxprofit;

// }


// int main(){
//     int prices[6]={7,1,5,3,6,4};
//     int n=sizeof(prices)/sizeof(int);
//     buysell(prices,n);
// }




int main(){
    int prices[6]={7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);
    int bestbuy[100000];
    bestbuy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        bestbuy[i]= min(prices[i-1],bestbuy[i-1]);

    }
    int maximumprofit = 0;
    for(int j=0;j<n;j++){
        int currentprofit = prices[j]-bestbuy[j];
        maximumprofit=max(maximumprofit,currentprofit);
    }
    cout<<"Maximum profit is : "<<maximumprofit;
}