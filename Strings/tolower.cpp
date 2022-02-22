#include<iostream>
using namespace std;
char tolower(char s){
    if(s>='a'&& s<='z'){
        return s;
    }
    else{
        char temp = s - 'A' + 'a';
         return temp;
    }
   
}

int main(){
    char s;
    cin>>s;
    cout<<tolower(s);
}