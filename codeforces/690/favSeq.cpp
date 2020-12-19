// Codeforces Round #690 (Div. 3)-A
#include<bits/stdc++.h>

void solve(int arr[],int n){
    int i=0,j=n-1;
    while(i<=j){
        if(i==j) std::cout<<arr[i++];
        else std::cout<<arr[i++]<<" "<<arr[j--]<<" ";
    }
    std::cout<<std::endl;
}
int main(){
    int t,n;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cin>>n;
        int arr[n];
        for(int j=0;j<n;j++) std::cin>>arr[j];
        solve(arr,n);
    }
}