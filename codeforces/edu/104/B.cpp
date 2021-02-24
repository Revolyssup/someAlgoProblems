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

/****************************************************/
int indexOfA(int a,int n){
    if(a==-1) return n-1;
    return a;
}
int solve(int n,int k){

    int a=n,b=-1;
    int tempa,tempb;
    while(k--){
        tempb=(b+1)%n;
        tempa=indexOfA(a-1,n);
        if(tempa==tempb){
            b=(tempb+1)%n;
        }else{
            b=tempb;
        }
        a=tempa;

    // k1++;
    }
    return b;
}

int main(){
    int t,n,k;CI(t);
    Fo(i,0,t){
        CI(n);CI(k);
        CO(solve(n,k)+1);
    }
}