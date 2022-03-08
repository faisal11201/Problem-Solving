#include <iostream>
using namespace std;
int gcd(int a, int b){
    if (a==0){
        return b;
    }
    if(a>=b){
        return gcd(a-b,b);
    }
    else{
        return gcd(a,b-a);
    }
}
// in similar way
int gcd(int a, int b){
  if(a==0){
    return b;
  return gcd(b%a,a);
int main() {
    cout<<gcd(24,72);
    return 0;
}
