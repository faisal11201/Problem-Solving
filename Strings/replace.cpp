#include<iostream>
using namespace std;
// TC->O(n), SC->O(n)
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
// Inplace solution
replace_white_space(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            s= s.substr(0,i)+"@40"+s.substr(i+1,s.length());
        }
    }
}// no need of return here 
int main()
{
    string s;
    getline(cin,s);
    cout<<replace_white_space(s);
    
}
