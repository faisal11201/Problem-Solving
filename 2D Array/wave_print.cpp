#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    // wave print means first top to down then down to top 
    // then top to down....
    // Idea if col is odd then down to top
    // if col is even then top to down

    for(int j=0;j<col;j++){
        // Odd case (j & 1)
        if(j%2!=0){
            for(int i=row-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        //even case
        else{
            for(int i=0;i<row;i++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}