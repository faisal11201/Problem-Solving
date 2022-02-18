#include<iostream>
using namespace std;
int first(int arr[],int n,int element){
    int si = 0;
    int ei = n - 1;
    int ans=-1;
    
    while (si<=ei){
        int mid = (si+ei)/2;
        if(arr[mid]==element){
            ans= mid;
            ei=mid-1;
        }
        else if(arr[mid]<element){
            si = mid+1;
        }
        else{
            ei=mid-1;
        }
    }
    return ans;

}
int last(int arr[],int n,int element){
    int si = 0;
    int ei = n - 1;
    int ans=-1;
    
    while (si<=ei){
        int mid = (si+ei)/2;
        if(arr[mid]==element){
            ans= mid;
            si = mid + 1;
        }
        else if(arr[mid]<element){
            si = mid+1;
        }
        else{
            ei=mid-1;
        }
    }
    return ans;

}
int main(){
    int arr[] = {1,2,3,3,3,5,6};
    cout<<"First occurance at index "<<first(arr,7,3)<<endl;
     cout<<"Last occurance at index "<<last(arr,7,3);
    return 0;
}