#include<bits/stdc++.h>

using namespace std;


int ans(string& s){
    char prev='0';
    int count=0;
    for(int i=0;i<s.size();i++){
        if(prev=='0' && s[i]=='1'){
            count++;
            prev='1';
        }else if(prev=='1' && s[i]=='0'){
            prev='0';
        }
    }
    return count;
}
int main(){
    int t;cin>>t;
    string s;
    for(int i=0;i<t;i++){
        cin>>s;
        cout<<ans(s)<<"\n";
    }
}