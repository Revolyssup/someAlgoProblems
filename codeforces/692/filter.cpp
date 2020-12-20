#include<bits/stdc++.h>


bool check(std::string& a,int n){
    int i=n-1;
    int count=0;
    while(a[i]==')'){
        count++;
        i--;
    } 
    if((n-count)<count) return true;
    else return false;
}
int main(){
    int t,n;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cin>>n;
        std::string str;
        std::cin>>str;
        if(check(str,n)) std::cout<<"Yes"<<std::endl;
        else std::cout<<"NO"<<std::endl;
    }
    return 0;
}
