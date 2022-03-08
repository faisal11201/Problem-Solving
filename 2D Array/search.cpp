#include<iostream>
using namespace std;
bool isPresent(int arr[3][3],int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][3];
    int target;
    cin>>target;
    for(int i=0;i<3;i++){
        for(int j=0;j<34;j++){
            cin>> arr[i][j];
        }
    }
    if (isPresent(arr,target)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}