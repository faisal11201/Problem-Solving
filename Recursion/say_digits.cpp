#include<iostream>
using namespace std;
void say_digits(int n,string arr[]){
    if(n==0){
        return;
    }
    int digits = n%10;
    say_digits(n/10,arr);
    cout<<arr[digits]<<" ";
}
int main(){
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven",
                    "eight","nine"};
    say_digits(n,arr);                
}