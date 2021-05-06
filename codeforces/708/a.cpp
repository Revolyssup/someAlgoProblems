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


/*********************************************/

vector<int> solve(vector<int>& a){
    sort(a.begin(),a.end());
    vector<int> ans;
    map<int,bool> isIndexNotToTake;
    vector<int> duplicates;
    Fo(i,0,a.size()-1){
        if(a[i]==a[i+1]){
            duplicates.push_back(a[i]);
            isIndexNotToTake[i]=1;
        }
    }    

    Fo(i,0,a.size()){
        if(!isIndexNotToTake[i]){
            ans.push_back(a[i]);
        }
    }

    Fo(i,0,duplicates.size()) ans.push_back(duplicates[i]);
    

        /************************/
    // vector<int> freq(a[a.size()-1]+1);
    // Fc(i,0,freq.size()) freq[i]=0;
    // Fo(i,0,a.size()){
    //     freq[a[i]]++;
    // }
    // Fc(i,0,freq.size()){
    //     if(freq[i]){
    //         ans.push_back(i);
    //         freq[i]--;
    //     }
    // }
    //  Fc(i,0,freq.size()){
    //      if(freq[i]){
    //          Fo(j,0,freq[i]) ans.push_back(i);
    //      }
    //  }
     return ans;
}
int main(){
    int t;cin>>t;
    int n;
    Fo(i,0,t){
        CI(n);
        vector<int> a(n);
        Fo(j,0,n) CI(a[j]);
        vector<int> answer=solve(a);
        Fo(j,0,n) cout<<answer[j]<<" ";
        CO(" ");
    }
   
}