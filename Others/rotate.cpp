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

void swapoit(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
/********************************************************************************/

void foo(vector<int>& a,int k){
    int i,n=a.size();
    k=k%(a.size());
    i=k;
    int j=0;
    do{
        if(i>=n) i=i%n;
        swapoit(&a[i],&a[j]);
        j++;
    }while(j!=k);
}
int main(){
    vector<int> a={1,2,3,4,5,6,7,8};
    foo(a,3);
    CO("\n");
    Fo(i,0,a.size()){
        cout<<a[i]<<" ";
    }
    CO("\n");
}