#include<bits/stdc++.h>


//Recursive approach
bool rbs(std::string& s,int start,int end){


}
int main(){
    int t;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::string s;
        std::cin>>s;
        if(rbs(s,0,s.size()-1)) std::cout<<"Yes\n";
        else std::cout<<"No\n";
    }
}