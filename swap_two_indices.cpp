#include<iostream>
using namespace std;


bool twoindices(string str1,string str2){
    for(int i=0;i<str1.length();i++){
        for(int j=0;j<str1.length();j++){
            
            swap(str1[i],str1[j]);
            //cout<<str1<<"  "<<str2<<" , swap  "<<str1[i]<<" and "<<str1[j]<<endl;
            // int c=str1[j];
            // str1[j]=str1[i];
            // str1[i]=c;
            if(str1==str2){
                cout<<"TRUE";
                return true;
            }
            swap(str1[i],str1[j]);
        }
    }
    cout<<"FALSE";
    return false;
}

int main(){
    string str1="abcd";
    string str2="adcb";
    twoindices(str1,str2);
    
}