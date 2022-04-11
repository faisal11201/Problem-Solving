#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(string st, string output, int index, vector<string> &ans){
    if (index>=st.length()){
        ans.push_back(output);
        return;
    }
    // Exclude
    solve(st,output,index+1,ans);

    //Include
    char ele = st[index];
    output.push_back(ele);
    solve(st,output,index+1,ans);
}
vector<string> subsequence(string st){
    vector<string> ans;
    string output = " ";
    int index = 0;
    solve(st,output,index,ans);
    return ans;
}
int main(){
    string st;
    cin>>st;
    vector<string> v;
    v = subsequence(st);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}