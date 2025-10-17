#include<iostream>
using namespace std;
void toLower(char work[],int n){
    for(int i=0;i<n;i++){
        char ch = work[i];
        if(ch>='a' && ch<='z'){
            continue;
        }
        else{
            work[i]=ch-'A'+'a';
        }
    }
}

int main(){
    char work[100]="ParrOT";
    toLower(work,strlen(work));
    cout<<work;
}