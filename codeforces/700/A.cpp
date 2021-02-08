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



void ans(string& s){
    //They both will change from most significant digit.
    Fo(i,0,s.size()){
        if(i%2==0){ //Alice turn
            if(s[i]!='a') s[i]='a';
            else s[i]='b';
        }else{ //Bob turn.
            if(s[i]!='z') s[i]='z';
            else s[i]='y';
        }
    }
}
int main(){
    int t;
    CI(t);
    string s;
    Fo(i,0,t){
        CI(s);
        ans(s);
        CO(s);
    }
}