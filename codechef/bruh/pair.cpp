#include<iostream>
using namespace std;
bool check(int& a,int& b,int& c){
    int arr[]={a,b,c};
    for(int i=0;i<3;i++){
        if(arr[i]==(arr[(i+1)%3]+arr[(i+2)%3])) return true;
    }
    return false;
}
int main(){
    int n,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        if(check(a,b,c)) cout<<"YES\n";
        else cout<<"No\n";
    }
}