#include "../../../helper.hpp"


bool check(vector<int>& a,int d){
    bool fallgood=true,ftwonum=false;

    Fo(i,0,a.size()){
        if(a[i]>d) {
            fallgood=false;
            break;
        }
    }
    if(fallgood) return true;
    //try to find at least two numbers whose sum is less or equal to d.
    sort(a.begin(),a.end());
    Fo(i,0,a.size()-1){
        if(a[i]+a[i+1]<=d)  return true;
    }
    return false;
}
int main(){
    int t,n,d;
    CI(t);
    Fo(i,0,t){
        CI(n);
        CI(d);
        vector<int> a(n);
        Fo(j,0,n) CI(a[j]);
        if(check(a,d)) cout<<"\nYes\n";
        else cout<<"No\n";
    }
}