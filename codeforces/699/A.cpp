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


int u(char& u){
    if(u=='U'){
        return 1;
    }
    return -1;
}

int r(char& r){
    if(r=='R') return 1;
    return -1;
}

bool checkin1d(string& s,int& delx,int& dely){
    //check if any sum of U's can correspond to dely and if any sum of R's can correspond to delx. D is -U and L is -R.

    Fo(i,0,s.size()){
        if(delx<0 && s[i]=='L')  delx++;
        else if(delx>0 && s[i]=='R') delx--;
        else if(delx==0) break; //found. Not check in y direction.
    }
    if(delx!=0) return false; // We cant possibly land on px so no need for further checking.

    Fo(i,0,s.size()){
        if(dely<0 && s[i]=='D')  dely++;
        else if(dely>0 && s[i]=='U') dely--;
        else if(dely==0) break; //found. Not check in y direction.
    }
    if(dely!=0) return false;



    return true;
}
bool check(string& s,int px,int py){
    int x=0,y=0;
    Fo(i,0,s.size()){
        if(s[i]=='U' || s[i]=='D')   y+=u(s[i]);
        else x+=r(s[i]);
    }
    int delx=x-px;
    int dely=y-py;
    return checkin1d(s,delx,dely);
}
int main(){
    int t,px,py;
    CI(t);
    string s;
    Fo(i,0,t){
        CI(px);CI(py);
        CI(s);
        if(check(s,px,py)) CO("Yes");
        else CO("No");
    }
}