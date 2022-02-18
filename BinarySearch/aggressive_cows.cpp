#include<iostream>
#include<algorithm>
using namespace std;
bool isPossible(int arr[],int n,int k,int mid){
    int current_pos = arr[0];
    int cow_count=1;
    for(int i=0;i<n;i++){
        if (arr[i]-current_pos>=mid){
            cow_count++;
            if (cow_count==k){
                return true;
            }
            current_pos=arr[i];
        }
    }
    return false;
}
int aggresive_cows(int arr[],int n,int k){
    sort(arr,arr+n);
    int si=0;
    int ans = -1;
    int maxi = -1;
    for(int i=0;i<n;i++){
        if (arr[i]>maxi){
            maxi = arr[i];
        }
    }
    int  ei= maxi;
    while(si<=ei){
        int mid = (si+ei)/2;
        if (isPossible(arr,n,k,mid)){
            ans = mid;
            si = mid + 1;
        }
        else{
            ei=mid-1;
        }
    }
    return ans;
}
int main(){
    int n=5;
    int k=2;
    int arr[5]={4,2,1,3,6};
    cout<<aggresive_cows(arr,n,k);

}