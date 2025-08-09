#include<iostream>
#include<string>
using namespace std;
int main(){
    int a=564;
    string s = to_string(a);
    cout<<s[0]<<endl;
    int a1 = s[0] - '0';
    int a2 = s[1] - '0';
    int a3 = s[2] - '0';
    cout<<a1<<" , "<<a2<<" , "<<a3<<endl;
    cout<<typeid(a2).name();


}
