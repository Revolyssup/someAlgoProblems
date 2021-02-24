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
/*****************/


int ans(vector<int>& a ,int k,int li,int ri){
    int count=0;
    if(li==ri) return k-1;
    Fc(j,li,ri){
        if(j==li){
            count+=(a[j+1]-2);
        }else if(j==ri){
            count+=(k-(a[j-1]+1));
        }else{
            count+=((a[j+1]-1)-(a[j-1]+1));
        }
    }
    return count;
}
int main(){
    int n,q,k,li,ri;
    CI(n);CI(q);CI(k);
    vector<int> a(n);
    Fo(i,0,n) CI(a[i]);
    Fo(i,0,q){
        CI(li);CI(ri);
        CO(ans(a,k,li-1,ri-1));
    }
}