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


/**************************/
int IsPalindrone(string& s){
    int i=0,j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]) return i;
        i++;
        j--;
    }
    return -1;
}

void ans(string& s){
    bool allA=true;
    Fo(i,0,s.size()){
        if(s[i]!='a'){
            allA=false;
            break;
        }
    }
    if(allA) {
        CO("NO");
        return;
    }
    CO("YES");
    int k=IsPalindrone(s);

    string temp=s.insert(k+1,"a");
    CO(temp);
    
}

int main(){
    int t;
    CI(t);
    Fo(i,0,t){
        string s;
        CI(s);
        ans(s);
    }
}
