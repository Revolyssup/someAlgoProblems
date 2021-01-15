#include<bits/stdc++.h>

int n=4;
std::vector<int> subset;
std::vector<int> permutation;
std::vector<int> included={false};
// a recursive approach;
void search(int k) {
    if (k == n) {
        for(auto i:subset) std::cout<<i<<" ";
        std::cout<<"\n";
    } else {
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }
}

// a recursive approach to find permutation all numbers from 0 to n-1
void search2(){
    if(permutation.size()==n){
        for(auto i:permutation) std::cout<<i<<" ";
        std::cout<<"\n";
    }
    else{
        for(int i=0;i<n;i++){
            if(included[i]) continue;
            included[i]=true;
            permutation.push_back(i);
            search2();
            included[i]=false;
            permutation.pop_back();
        }
    }
}
int main(){
    // search(0);
    search2();
}