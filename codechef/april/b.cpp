#include<iostream>

using namespace std;
int main(){
    int t;
    float k1,k2,k3,v;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>k1;cin>>k2;cin>>k3;cin>>v;
        int tc=(100/(k1*k2*k3*v))*1000;
        if(tc<9575) cout<<"YES\n";
        else cout<<"NO\n";
    }
}