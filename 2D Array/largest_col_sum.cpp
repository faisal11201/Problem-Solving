#include<iostream>
using namespace std;
void col_wise_sum(int arr[3][3]){
    int max= -1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[j][i];
        }
        if(sum>max){
            max = sum;
        }
    }
    cout<<max<<endl;
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>> arr[i][j];
        }
    }
    col_wise_sum(arr);
}