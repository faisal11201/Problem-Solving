#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int m,int mid){
    int pages=0;
    int student_count=1;
    for(int i=0;i<n;i++){
        if(pages + arr[i]<=mid){
            pages+=arr[i];
        }
        else{
            student_count++;
            if (student_count>m || arr[i]>mid){
                return false;
            }
            pages = arr[i];
        }
    }
    return true;
}
int book_allocation(int arr[], int n,int m){
    int si = 0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ei = sum;
    int ans=-1;
    while(si<=ei){
        int mid = (si+ei)/2;
        if (isPossible(arr,n,m,mid)){
                ans = mid;
                ei = mid-1;
        }
        else{
            si = mid + 1;
        }
    }
    return ans;
}
int main(){
    int n = 4;
    int m = 4;
    int arr[4]={5,17,100,11};
    cout<<book_allocation(arr,n,m);

}