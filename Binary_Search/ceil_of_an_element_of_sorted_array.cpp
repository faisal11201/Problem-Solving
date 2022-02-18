// Ceil means the smallest element greater than the target element.

#include<iostream>
using namespace std;
int ceil_of_array(int arr[],int n,int target){
    int si = 0;
    int ei = n-1;
    int ans = -1;
    while(si<=ei){
        int mid = (si+ei)/2;
        if (arr[mid]==target){
            return arr[mid];
        }
        else if(arr[mid]<target){
            si = mid+1;
        }
        else{
            ans = arr[mid];
            ei=mid-1;
        }
    }
    return ans;
}
int main(){
    int arr[7] = {1,2,3,4,8,10,12};
    int target = 5;
    cout<<ceil_of_array(arr,7,target);

}


