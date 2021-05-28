// For a given N, find the number of ways to choose an integer x from the range [0,2N−1] such that x⊕(x+1)=(x+2)⊕(x+3), where ⊕ denotes the bitwise XOR operator.
// Re-arranging we get, x xor x+1 xor x+2 xor x+3 should be 0. Which will only be true if last two bits are 00.
//Given n=no.of bits.
#include<iostream>
#include<cmath>
using namespace std;


int ans(int n){

}
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        cout<<ans(n)<<"\n";
    }
}