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




int ans(vi& a,int k){

}
int main(){
    int t,n,k;
    Fo(i,0,t){
        CI(n);
        CI(k);
        vi a(n);
        Fo(j,0,n) CI(a[j]);
        CO(ans(a,k));
        CO("\n");
    }
}