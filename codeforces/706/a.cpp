#include<bits/stdc++.h>
using namespace std;
/*Standard loops or functions used*/
#define INIT(i,n) int i=n
#define Fc(i,a,b) for(int i=a;i<=b;i++) //closed interval 
#define Fo(i,a,b) for(int i=a;i<b;i++)  //open interval
#define CI(n) std::cin>>n  
#define CO(n) std::cout<<n<<"\n"  
#define PB push_back
#define SQ(a) a*a  
/*Type definitions*/
typedef long long ll;
typedef std::vector<int> vi;
typedef std::vector<std::vector<int>> vvi;
typedef std::pair<int,int> pii;
typedef std::pair<double,double> pdd;
typedef std::set<std::pair<int,int>> spi;
typedef std::set<int> si;
typedef std::set<int>::iterator sit;

//standard utility functions.
int cmp(int& a,int& b,bool& max){
    if(a<b){
       if(max) return b;
       return a;
    }
    if(max) return a;
       return b;
}


/******************************/


bool ans(string& s,int k){
    Fo(i,0,k){
        if(s[i]!=s[s.size()-i-1]) return false;
    }
    int pos=k-1;
    if(s.size()-2*pos-1>1) return true;
    return false; 
}
int main(){
    int t;CI(t);
    int n,k;
    string s;
    Fo(i,0,t){
        CI(n);CI(k);CI(s);
        if(ans(s,k)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}