#include<iostream>
using namespace std;
string replace_white_space(string s){
    int n = s.length();
    string temp="";
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<replace_white_space(s);
    
}