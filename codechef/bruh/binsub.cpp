#include<bits/stdc++.h>
using namespace std;


int ans(string& s){
    int i=0;
    int goodCount=0,badCount=0;
    while(s[i]=='0'){
        i++;
        goodCount++;
    }
    int j=s.size()-1;
    while(s[j]=='0'){
        j--;
        goodCount++;
    }
    while(i<=j){
        if(s[i]=='1') goodCount++;
        else badCount++;
        i++;
    }
    if(goodCount<badCount) return goodCount;
    else return badCount;
}
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        string s;
        cin>>s;
        std::cout<<ans(s)<<"\n";
    }
}