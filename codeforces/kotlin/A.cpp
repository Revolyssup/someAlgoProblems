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



map<int,int> solve(vector<int>& a){
    map<int,int> seen;
    int currele;
    Fo(i,0,a.size()){
        seen[a[i]]=-1;
    }
    for(int i=0;i<a.size();i++){
        currele=a[i];
        if(seen[currele]==-1) seen[currele]=i;
        else seen[currele]=i;
    }
    return seen;


}
int main(){
    int n;CI(n);
    vector<int> a(n);
    Fo(i,0,n){
        CI(a[i]);
    }
    map<int,int> finalIndices=solve(a);


    CO(finalIndices.size());
    Fo(i,0,a.size()){
        if(i==finalIndices[a[i]]){
            cout<<a[i]<<" ";
        }
        
    }
}