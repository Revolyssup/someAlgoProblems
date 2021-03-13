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

int minno(int a,int b,int c){
    if(a<b && a<c) return a;
    else if(b<a && b<c) return b;
    return c;
}

/******************/

int answer(int n,int e,int h,int a,int b,int c){
    if(e<n && h<n) return -1;
    int mini=minno(a,b,c);
    int ans=c*n;
    e-=n;
    h-=n;

}
int main(){
    int t,n,e,h,a,b,c;
    CI(t);
    Fo(i,0,t){
        CI(n);CI(e);CI(h);CI(a);CI(b);CI(c);
        cout<<answer(n,e,h,a,b,c)<<"\n";
    }
}