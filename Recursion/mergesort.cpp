#include<iostream>
using namespace std;
void merge(int *arr, int s,int e){
    int mid = (s+e)/2;
    int len1 = mid-s + 1;
    int len2 = e - mid;
    int *a1 = new int[len1];
    int *a2 = new int[len2];
    // copy element
    int index = s;
    for(int i=0;i<len1;i++){
        a1[i] = arr[index++];
    }
    index = mid+1;
    for(int i=0;i<len2;i++){
        a2[i] = arr[index++];
    }

    int i=0,j=0,k=s;
    while (i<len1 && j<len2){
        if (a1[i]<a2[j]){
            arr[k++] = a1[i++];
        }
        else{
            arr[k++] = a2[j++];
        }
    }
    while (i<len1){
        arr[k++] = a1[i++];
    }
    while (j<len2){
        arr[k++] = a2[j++];
    }
}
void mergeSort(int *arr, int s, int e){
    if (s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
