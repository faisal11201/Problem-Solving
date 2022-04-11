#include<iostream>
#include<algorithm>
using namespace std;

int getpivot(int*arr, int s,int e){
    int count = 0;
    int p = arr[s];
    for(int i=s;i<=e;i++){
        if(p>arr[i]){
            count++;
        }
    }
    swap(arr[s],arr[s+count]);
    int pivot_index = s + count;
    int i=s;
    int j =e;
    while (i<j){
        if (arr[i]<p){
            i++;
        }
        else if(arr[j]>=p){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    } 
    return pivot_index;
}
void quickSort(int *arr,int s,int e){
    if (s>=e){
        return;
    }
    int pivot = getpivot(arr,s,e);
    quickSort(arr,s,pivot-1);
    quickSort(arr,pivot+1,e);
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}