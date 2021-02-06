#include "../helper.hpp"


int bruh(int a,int b,int c){
    return abs(a-b)+abs(b-c)+abs(a-c);
}
int ans(vector<int>& a){
    int maxi=INT_MIN;
    Fo(i,0,a.size()-2){
        Fo(j,i+1,a.size()-1){
            Fo(k,j+1,a.size()){
                maxi=max(maxi,bruh(a[i],a[j],a[k]));
            }
        }
    }
    return maxi;
}

int main(){
    int t,n;
    CI(t);
    Fo(i,0,t){
        CI(n);
        vector<int> a(n);
        Fo(j,0,n) CI(a[j]);
        CO(ans(a));
    }

}