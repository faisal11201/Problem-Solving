  // FLOOR OF AN ELEMENT IN SORTED ARRAY MEANS THE GREATEST ELEMENT SMALLEST THAN THE TARGET ELEMENT.

#include<iostream>
using namespace std;
int floor_of_array(int arr[],int n,int target){
    int si = 0;
    int ei = n-1;
    int ans = -1;
    while(si<=ei){
        int mid = (si+ei)/2;
        if (arr[mid]==target){
            return arr[mid];
        }
        else if(arr[mid]<target){
            ans = mid;
            si = mid+1;
        }
        else{
            ei=mid-1;
        }
    }
}
int main(){
    int arr[7] = {1,2,3,4,8,10,12};
    int target = 7;
    cout<<floor_of_array(arr,7,target);

}


