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

namespace helper{
template<typename T>
void fillArr(vector<T> &arr){
   for(int i=0;i<arr.size();i++){
      T temp;
      std::cin>>temp;
      arr.push_back(temp);
   }
}

template<typename T>
void fillArr(vector<T> &arr,int n){
   for(int i=0;i<n;i++){
      T temp;
      std::cin>>temp;
      arr[i]=temp;
   }
}

template<typename T>
void printArr(vector<int>& a){
   std::cout<<"Printing array...\n";
   for(int i=0;i<a.size();i++){
      std::cout<<a[i]<<" ";
   }
   std::cout<<std::endl;
}

template<typename T>
void printArr(vector<int>& a,std::string& s){
   std::cout<<s<<"\n";
   for(int i=0;i<a.size();i++){
      std::cout<<a[i]<<" ";
   }
   std::cout<<std::endl;
}
template<typename T>
void printArr(vector<int>& a,const char* s){
   std::cout<<s<<"\n";
   for(int i=0;i<a.size();i++){
      std::cout<<a[i]<<" ";
   }
   std::cout<<std::endl;
}


}
