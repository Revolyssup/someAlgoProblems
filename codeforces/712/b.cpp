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

//

bool ans(string &s1,string &s2){
    bool startCount=false;
    int noOfZS1=0,noOfOS1=0;
    int noOfZS2=0,noOfOS2=0;
    int diffrom=-1;
    for(int i=s1.size()-1;i>-1;i--){
        if(!startCount && s1[i]!=s2[i]){
            startCount=true;
            diffrom=i;
            
        }
        if(startCount){
            if(s1[i]=='1') noOfOS1++;
            else noOfZS1++;

            if(s2[i]=='1') noOfOS2++;
            else noOfZS2++;
        }
    }
    if(diffrom==-1) return true;
    else if(noOfOS1==noOfZS1 && noOfOS2==noOfZS2){
        int countones1,countones2;
        for(int i=0;i<=diffrom;i++){
            countones1=0;
            countones2=0;
            if(s1[i]=='1') countones1++;
            if(s2[i]=='1') countones2++;
            
            i++;

            if(s1[i]=='1') countones1++;
            if(s2[i]=='1') countones2++;
    
            if(abs(countones1-countones2)==1) return false;
        }
        return true;
    }
    return false;
}

int main(){

    int t,n;
    CI(t);
    Fo(i,0,t){
        CI(n);
        string s1;
        string s2;
        CI(s1);
        CI(s2);
        if(ans(s1,s2)) CO("YES");
        else CO("NO");
    }
}