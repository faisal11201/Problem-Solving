#include<iostream>
using namespace std;
int linear(int* arr, int size, int ele, int index){
    if(index>=size){
        return -1;
    }
    if (arr[index]==ele){
        return index;
    }
    return linear(arr,size,ele,index+1);
}
int main(){
    int n,element;
    cin>>n>>element;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<linear(arr,n,element,0);
}