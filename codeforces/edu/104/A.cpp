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

/****************************************************************************************************/

int ans(vector<int>& a){
    sort(a.begin(),a.end());
    int countOfSmallest=1;
    Fo(i,0,a.size()-1){
        if(a[i]==a[i+1]) countOfSmallest++;
        else break;
    }
    return (a.size()-countOfSmallest);

}
int main(){
    int t,n;
    CI(t);
    Fo(i,0,t){
        CI(n);
        vector<int> a(n);
        Fo(j,0,n) CI(a[j]);
        CO(ans(a)); 
    }
}