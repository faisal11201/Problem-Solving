#include<iostream>
using namespace std;
int binary(int* arr, int ele, int start, int end){
    if(start>end){
        return -1;
    }
    int mid = (start+end)/2;
    if(arr[mid]==ele){
        return mid;
    }
    else if(arr[mid]>ele){
        return binary(arr,ele,start,mid-1);
    }
    else{
        return binary(arr,ele,mid+1,end);
    }
}
int main(){
    int n,ele;
    cin>>n>>ele;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<binary(arr,ele,0,n-1);
}