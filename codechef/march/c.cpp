#include<bits/stdc++.h>

using namespace std;

int ans(int num){
    int noBits=(int)log2(num)+1;
    int a=0,b=0;
    for(int i=noBits-1;i>-1;i--){
        int temp=1<<i;
        if(temp&num){
            if(a<b){
                a+=temp;
            }else{
                b+=temp;
            }
        }else{
            a+=temp;
            b+=temp;
        }
    }
    return a*b;
}
int main(){
    int t;cin>>t;
    int num;
    for(int i=0;i<t;i++){
        cin>>num;
        cout<<ans(num)<<"\n";
    }
}