#include<iostream>

using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a<b) cout<<"Aoki\n";
    else if(a>b) cout<<"Takahashi\n";
    else{
        if(c==1) cout<<"Takahashi\n";
        else cout<<"Aoki\n";
    }
}