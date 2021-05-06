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

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//standard utility functions.
int cmp(int& a,int& b,bool& max){
    if(a<b){
       if(max) return b;
       return a;
    }
    if(max) return a;
       return b;
}


int main(){
    int n,q;CI(n);CI(q);
    vector<int> cards(n);
    Fo(i,0,n){
        CI(cards[i]);
    }
    int temp;
    int totop;
    Fo(i,0,q){
       CI(temp);
       Fo(j,0,n){
           if(temp==cards[j]){
               totop=j;
               break;
           }
       }
       cout<<totop+1<<" ";
       temp=cards[totop];
       cards.erase(cards.begin()+totop);
       cards.insert(cards.begin(),temp);
    }


}   