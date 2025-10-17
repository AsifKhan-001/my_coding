#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> arr , int target){
    int st=0;
    int end=arr.size()-1;
    int cursum=0;
    vector<int> ans;
    while(st<end){
        cursum=arr[st]+arr[end];
        if(cursum==target){
            cout<<"The indices are: "<<st<<" X "<<end;
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(cursum > target){
            end--;
        }
        else{
            st++;
        }
    
    }
    return ans;
}
int main(){
    vector<int> vec={2,7,11,15};
    int target = 9;
    pairSum(vec,target);
}
