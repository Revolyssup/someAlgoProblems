#include<iostream>
using namespace std;
int main(){
    int n,s,d;
    cin>>n;
    cin>>s;
    cin>>d;
    int xi,yi;
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>xi;
        cin>>yi;
        if(xi<s && yi>d){
            flag=true;
            break;
        }
    }
    if(flag) cout<<"Yes\n";
    else cout<<"No\n";

}