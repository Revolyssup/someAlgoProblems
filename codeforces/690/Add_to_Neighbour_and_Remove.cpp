// Codeforces Round #690 (Div. 3)
#include<bits/stdc++.h>


bool done(const std::vector<int>& arr){
    int a=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]!=a)  return false;
    }
    return true;
}

int solve(std::vector<int> arr){
    if(done(arr)) return 0;
     int min=INT_MAX;
    for(int i=0;i<arr.size()-1;i++){
        std::vector<int> temp=arr;
        temp[i+1]+=temp[i];
        temp.erase(temp.begin()+i);
        int lol=(1+solve(temp));
        if(min>lol) min=lol;
    }
    return min;
}
int main(){
    int t,n;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cin>>n;
        std::vector<int> arr(n);
        for(int j=0;j<n;j++){
             std::cin>>arr[j];
        }
        std::cout<<solve(arr)<<std::endl;
    }
}