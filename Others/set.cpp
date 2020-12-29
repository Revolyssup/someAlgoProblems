#include<bits/stdc++.h>

int n=4;
std::vector<int> subset;

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
int main(){
    search(0);
}