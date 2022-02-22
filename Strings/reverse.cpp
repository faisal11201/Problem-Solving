#include<iostream>
using namespace std;
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
    for(int i=0;i<len/2;i++){
        char temp = name[i];
        name[i]=name[len-1-i];
        name[len-1-i]=temp;
    }
    cout<<"Reverse "<<name;
}