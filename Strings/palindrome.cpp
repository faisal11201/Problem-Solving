#include<iostream>
using namespace  std;
int main(){
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    int len=0;
    int i=0;
    while(name[i]!='\0'){
        len++;
        i++;
    }
    int si=0;
    int ei=len-1;
    bool isP = true;
    while(si<ei){
        if(name[si]!=name[ei]){
            isP = false;
            break;
        }
        si++;
        ei--;
    }
    if(isP){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome";
    }
}