#include<bits/stdc++.h>
using namespace std;


int ans(vector<int>& a){
    int Oddcount=0,Evencount=0;
    for(int i=0;i<a.size();i++){
        if(a[i]%2==0) Evencount++;
        else Oddcount++;
    }
    if(Evencount<Oddcount) return Evencount;
    else return Oddcount;
  
}
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<ans(a)<<"\n";
    }
}