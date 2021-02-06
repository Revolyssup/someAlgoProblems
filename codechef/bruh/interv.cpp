#include<bits/stdc++.h>
using namespace std;
//0 for reject, 1 for slow, 2 for bot, 3 for selected.


int verdict(vector<int>& a,int k){
    int solved=0;
    double lol=a.size();
    bool slow=false;
    bool isAbot=true;
    for(int i=0;i<a.size();i++){
        if(a[i]!=-1){
            solved++;
            if(a[i]>k) slow=true;
            if(a[i]>1) isAbot=false;
        }
        else isAbot=false;
    } 
    if(solved<ceil(lol/2)) {
        return 0;
    }
    if(slow) return 1;
    if(isAbot) return 2;
    else return 3;

}
int main(){
    int t,n,k,ans;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        cin>>k;
        vector<int> a(n);
        for(int j=0;j<n;j++) cin>>a[j];
        ans=verdict(a,k);
        if(ans==0) cout<<"Rejected\n";
        else if(ans==1) cout<<"Too Slow\n";
        else if(ans==2) cout<<"Bot\n";
        else cout<<"Accepted\n"; //yayyyy
    }
}