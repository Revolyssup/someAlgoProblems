#include<iostream>

using namespace std;

int main(){
    int t,x,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;cin>>a;cin>>b;
        cout<<10*(a+b*(100-x))<<"\n";
    }
}