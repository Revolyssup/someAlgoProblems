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

int solve(vector<int>& a){
    int k=(a.size())/3;
    int d0=0,d1=0,d2=0;
    int count=0;
    Fo(i,0,a.size()){
        if(a[i]%3==0) d0++;
        else if(a[i]%3==1) d1++;
        else d2++;
    }
    int d0wants=(k-d0);
    int d1wants=(k-d1);
    int d2wants=(k-d2);
    if(d0wants<0){
        if(d0wants<d1wants){
            d0wants+=d1wants;
            count+=d1wants;
            d2wants-=d1wants;
        }
        count+=d2wants;
    }else{
        if(d2wants<d0wants){
            d2wants+=d0wants;
            count+=d0wants;
            d1wants-=d0wants;
        }
        count+=d1wants;
    }
    return count;
}
int main(){
    int t,n;CI(t);
    Fo(i,0,t){
        CI(n);
        vector<int> a(n);
        Fo(j,0,n) CI(a[j]);
        CO(solve(a));
    }
}