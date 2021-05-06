#include<iostream>
#include<climits>
using namespace std;

int maxi(int a,int b){
    if(a>b) return a;
    return b;
}
bool solve(string &s,int k){
    int count=0;
    int max=INT_MIN;
    for(int i=0;i<s.size();i++){
        if(s[i]=='*') {count++;max=maxi(max,count);}
        else {
            count=0;
        }
    }
    if(max>=k) return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n;cin>>k;
        string s;
        cin>>s;
        if(solve(s,k)) cout<<"YES\n";
        else cout<<"NO\n";

    }
}