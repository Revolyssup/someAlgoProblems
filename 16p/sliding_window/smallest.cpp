#include "../../helper.hpp"


int solve(vector<int>& a,int k){
    int len=0;
    int sum=0;
    int ans=INT_MAX;
    Fc(i,0,a.size()){
        if(sum<k){
            if(i==a.size()) return ans;
            sum+=a[i];
            len++;
          
        }else{
            ans=min(ans,len);
            sum-=a[i-len];
            i--;
            len--;
        
        }
    }
    return ans;
}
int main(){
    int n,k;
    CI(n);CI(k);
    vector<int> a(n);
    Fo(i,0,n) CI(a[i]);
    CO(solve(a,k));
}