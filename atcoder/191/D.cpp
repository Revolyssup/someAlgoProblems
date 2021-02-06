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


bool isin(int x1,int y1,double x,double y,double r){
    double lhs=((x-x1)*(x-x1))+((y-y1)*(y-y1));
    double rhs=r*r;
    if(lhs<=rhs) return true;
    return false;
}
int solve(double x,double y,double r){
    int u=floor(y+r),d=floor(y-r),rt=floor(x+r),lt=floor(x-r);
    int count=0;
    Fo(i,lt,rt){
        Fo(j,d,u){
            if(isin(i,j,x,y,r)){
                count++;
            }
        }
    }
    return count;
}


int main(){
    double x,y,r;

    CI(x);CI(y);CI(r);
    CO(solve(x,y,r));
}