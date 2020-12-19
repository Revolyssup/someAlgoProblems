#include<bits/stdc++.h>
// Codeforces Round #690 (Div. 3)-E1

int solve(std::vector<int>& a);
int nc3(int n);
int main(){
    int n,t;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cin>>n;
        std::vector<int> a(n);
        for(int j=0;j<n;j++) std::cin>>a[j];
        std::cout<<solve(a)<<std::endl;
    }
}


int solve(std::vector<int>& a){
    std::sort(a.begin(),a.end());
    

}
int nc3(int n){
    return (n*(n-1)*(n-2))/6;
}