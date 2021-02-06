#include "../../helper.hpp"

int main(){
    int n,x;
    CI(n);CI(x);
    int temp;
    vector<int> a;
    Fo(i,0,n){
        CI(temp);
        if(temp!=x)   a.push_back(temp);

    }
    CO("");
    Fo(i,0,a.size()) std::cout<<a[i]<<" ";
    CO("");
    
}