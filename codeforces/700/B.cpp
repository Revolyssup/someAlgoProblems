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

int minindex(vector<int>& a){
    int ans;
    int smallest=INT_MAX;
    Fo(i,0,a.size()){
        if(smallest>a[i]){
            smallest=a[i];
            ans=i;
        }
    }
    return ans;
}
/*************************************/

bool ans(vector<int>& a,vector<int>& b,int& A,int& B){
    if(a.size()==0) return  true;
    int newhealth=B;
    if(B==0){
        if(a.size()>0) return false;
        return true;
    }
   
    int smallestindex=minindex(a);
    if(a[smallestindex]>B){
        if(a.size()!=1) return false; //this is not the last monster.
        if(b[0]<=A) return true;
        return false;
    }
    newhealth-=a[smallestindex]; //will be loosing this much health.
    //hit this mf
    if(b[smallestindex]<=A){ //delete this monster
        a.erase(a.begin()+smallestindex);
        b.erase(b.begin()+smallestindex);
    }else{
        b[smallestindex]-=A;
    }
    
    return ans(a,b,A,newhealth);
}
int main(){
    int t,A,B,n;
    CI(t);
    Fo(i,0,t){
        CI(A);CI(B),CI(n);
        vector<int> a(n);
        vector<int> b(n);
        Fo(j,0,n) CI(a[j]);
        Fo(j,0,n) CI(b[j]);
        if(ans(a,b,A,B)) CO("YES");
        else CO("NO");
    }

}