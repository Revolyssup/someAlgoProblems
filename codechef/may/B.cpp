#include<iostream>

using namespace std;

int main(){
    int t,n,x,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;cin>>x;cin>>k;
        if(x%k==0 || (n+1-x)%k==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}