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
/**********************/


int ans(int x,int y){
    int rt,lt;
    int count=0;
    Fc(i,1,y){
        rt=(i*i)+i;
        if(rt>x) rt=x;
        lt=i+1;
        if(rt<lt){
            count+=1;
            break;
        }
        count+=(rt-lt);
    }   
    return count;
}
int main(){
    int t,x,y;
    CI(t);
    Fo(i,0,t){
        CI(x);CI(y);
        CO(ans(x,y));
    }
}