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

uint64_t givemax(uint64_t n,uint64_t k,uint64_t p,int initk){
    if(n==k) return 1;
    int newk;
    if(k>n){
        if(k%n!=0) {
            return ((k/n)+1);
        }
        return (k/n);
    }
    newk=p*initk;
    return givemax(n,newk,p+1,initk);
    
   
}

int main(){
    uint64_t n,k,t;
    CI(t);
    Fo(i,0,t){
        CI(n);
        CI(k);
        cout<<givemax(n,k,2,k)<<" ";
    }
   
}