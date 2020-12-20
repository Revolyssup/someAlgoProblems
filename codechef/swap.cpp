#include<bits/stdc++.h>



long long int solve(std::vector<long long int>& M,long long int N){

int count=0; //how many elements in M are smaller than smallest element of M.

for(int i=0;i<M.size();i++){
    if(M[i]>=N) return count;
    count++;
}
return count;
}
int main(){
    long long int n,m;
    std::cin>>n;
    std::cin>>m;
    std::vector<long long int> N(n);
    std::vector<long long int> M(m);
    for(int i=0;i<n;i++) std::cin>>N[i];
    for(int i=0;i<m;i++) std::cin>>M[i];
    std::sort(M.begin(),M.end());
    std::sort(N.begin(),N.end());
    std::cout<<N.size()*solve(M,N[0])<<std::endl;
    return 0;
}