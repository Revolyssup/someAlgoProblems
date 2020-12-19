#include<bits/stdc++.h>

int gcd2(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd2(b % a, a); 
} 
int gcd(std::vector<int>& arr){
       int result = arr[0]; 
       int n=arr.size();
    for (int i = 1; i < n; i++) 
    { 
        result = gcd2(arr[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
}
int main(){
    int n,m;
    std::cin>>n;
    std::cin>>m;
    std::vector<int> N(n);
    std::vector<int> M(m);
    std::vector<int> ans;
    for(int i=0;i<n;i++) std::cin>>N[i];
    for(int i=0;i<m;i++) std::cin>>M[i];
    std::vector<int> q(n);
    for(int j=0;j<m;j++){
        for(int k=0;k<n;k++){
             q.push_back(N[k]+M[j]);

        }
    ans.push_back(gcd(q));
    q.clear();
    }

for(int i=0;i<ans.size();i++) std::cout<<ans[i]<<" ";
std::cout<<std::endl;
}