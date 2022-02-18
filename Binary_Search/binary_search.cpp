#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int element){
    int si = 0;
    int ei = n - 1;
    
    while (si<=ei){
        int mid = (si+ei)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            si = mid+1;
        }
        else{
            ei=mid-1;
        }
    }
    return -1;

}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    cout<<"Element found at index "<<binary_search(arr,7,4);
    return 0;
}