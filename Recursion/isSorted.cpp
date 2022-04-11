#include<iostream>
using namespace std;
bool isSorted(int* arr, int n,int i){
    if(i>=n){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    else{
        isSorted(arr,n,i+1);
    }
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<isSorted(arr,n,0);
}