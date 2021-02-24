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


/**************************************/

int ans(int l,int r){
    int i,j=r-1;
    int count=0;
    while(j>l-1){
        i=j;
        while(i>l-1 && i+j>r) i--;
        if(i!=l-1) break;
        j--;
    }
    count+=((i-l+1)*(j-l+1));
    
    return count;
}
int main(){
    int t,l,r;
    CI(t);
    Fo(i,0,t){
        CI(l);CI(r);
        CO(ans(l,r));
    }
}