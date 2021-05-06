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
int minIndex(vi a){
    sort(a.begin(),a.end());

}

void ans(vvi& a,int n){
    vi f(n+1); //index denotes frnd and value denotes how many times is is invited already
    Fo(i,0,n) f[i]=0;
    Fo(i,0,a.size()){
        int mini=minIndex((a[i])); //a[i] array, value denotes frnd who is being invited that day.

    }
}
int main(){
    int t;CI(t);
    int n,m,k;

    Fo(i,0,t){
        CI(n);CI(m);
        vvi a(m,vi(n,0));
        Fo(j,0,m){
            CI(k);
            Fo(p,0,k) CI(a[j][p]);
        }
       ans(a,n);
    }
   

}