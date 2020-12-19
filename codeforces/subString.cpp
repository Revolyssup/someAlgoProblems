// Codeforces Round #690 (Div. 3)-B
#include<bits/stdc++.h>
bool solve(char s[],int n);

int main(){
    int t,n;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cin>>n;
        char arr[n];
        for(int j=0;j<n;j++) std::cin>>arr[j];
        if(solve(arr,n)) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
    }
}

bool solve(char s[],int n){
    if(n<4) return false;
    int i=0,j=n-4;
    char ans[]={'2','0','2','0'};
    bool front=true;
    for(int k=0;k<4;k++){
        if(ans[k]==s[i] && front){
            i++;
            j++;
        }
        else if(ans[k]==s[j]){
            front=false;
            j++;
        }
        else return false;
    }
    return true;
}