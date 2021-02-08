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


int main(){
    int n;
    CI(n);
    int i=0,j=n-1;
    int mid;
    int last;
    int midele,midelep1,midelem1;
    cout<<"?"<<n+1<<"\n";
        cout.flush();
        CI(last);
    while(i<j){
        mid=(j-i)/2+1;
        cout<<"?"<<mid<<"\n";
        cout.flush();
        CI(midele);

        cout<<"?"<<mid+1<<"\n";
        cout.flush();
        CI(midelep1);


        cout<<"?"<<mid-1<<"\n";
        cout.flush();
        CI(midelem1);


        if(mid<midelep1 && mid>midelem1) return mid+1;
        if(mid<midelep1){
            j=mid;
        }else if(mid>midelem1) i=mid;
        else{
            if(mid==last){
                j=mid;
            }else i=mid;
        }
    }
    return 1;
}