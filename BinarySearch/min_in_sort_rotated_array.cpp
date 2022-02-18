#include<iostream>
#include<vector>
using namespace std;
int findMin(vector<int>& nums) {
        int n = nums.size();
        int si = 0;
        int ei = n-1;
        if (nums[ei]>nums[0]){
            return nums[0];
        }
        while(si<=ei){
            int mid = si + (ei-si)/2;
            int nxt = (mid+1)%n;
            int prv = (mid+n-1)%n;
            if (nums[prv]>=nums[mid] && nums[mid]<=nums[nxt]){
                return nums[mid];
            }
            if (nums[0]<=nums[mid]){
                si = mid + 1;
            }
            else{
                ei = mid -1;
            }
        }
        return -1;
    }
int main(){
    vector<int> v = {3,4,5,1,2};
    cout<<findMin(v);
}    



