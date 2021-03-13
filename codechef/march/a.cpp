#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,H,x;
    cin>>N;cin>>H;cin>>x;
    int threshold=H-x;
    int temp;
    for(int i=0;i<N;i++){
        cin>>temp;
        if(temp>=threshold){
            cout<<"YES\n";
            return 0;
        } 
        
    }
    cout<<"NO\n";
}