#include "../../helper.hpp"


int maxsum(vector<int>& a,int k){
    int maxi=0;
    Fo(i,0,k){
        maxi+=a[i];
    }
    int currsum=maxi;
    Fo(i,k,a.size()){
        currsum=currsum+a[i]-a[i-k]; //sliding window
        maxi=max(maxi,currsum);
    }
    return maxi;
}
int main(){
    int n,k;CI(n);CI(k);
    vector<int> a(n);
    Fo(i,0,n) CI(a[i]);
    CO(maxsum(a,k));
}