#include<bits/stdc++.h>
using namespace std;

// Ramu has N dishes of different types arranged in a row: A1,A2,…,AN where Ai denotes the type of the ith dish. He wants to choose as many dishes as possible from the given list but while satisfying two conditions:

// He can choose only one type of dish.
// No two chosen dishes should be adjacent to each other.

int solve(vector<int>& a){
    map<int,vector<int>> store;
    for(int i=0;i<a.size();i++) {
        int n=store[a[i]].size();
        if(store[a[i]].empty() || store[a[i]][n-1]!=i-1){

              store[a[i]].push_back(i);
        }
    }
    int max=-1;
    int ans;
    for(auto i=store.begin();i!=store.end();i++){
        int s=i->second.size();
        if(s>max){
            max=i->second.size();
            
            ans=i->first;
        }
    }
    return ans;
}

int main(){

    int t,n;
    cin>>t;

    for(int i=0;i<t;i++){
      
        cin>>n;
        vector<int> a(n);
        for(int j=0;j<n;j++){
             
            cin>>a[j];
        } 

        cout<<solve(a)<<"\n";
    }
}