/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
*/

#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int si=0;
        int ei = nums.size()-1;
        int ans = -1;
        while (si<=ei){
            int mid = (si+ei)/2;
            if (nums[mid]==target){
                ans = mid;
                return ans;
            }
            else if (nums[mid]<target){
                ans = mid;
                si = mid +1;
            }
            else{
                ei=mid-1;
            }
        }
        return ans+1;
    }
int main(){
    vector<int> v = {1,3,5,6};
    int target = 2;
    cout<<searchInsert(v,target);
}    