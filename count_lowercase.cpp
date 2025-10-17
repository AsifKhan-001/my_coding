#include<iostream>
using namespace std;
int main(){
    string word="hsdbhewasqwhuqw";
    char str[5]={'a','e','i','o','u'};
    int count = 0;
    for(int i=0;i<word.length();i++){
        for(int j=0;j<=5;j++){
            if(word[i]==str[j]){
                count++;
                cout<<word[i]<<endl;
            }
        }
    }
    cout<<"Total Number of Lower case vowels is :"<<count;
}