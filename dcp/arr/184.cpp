// Given an array of positive integers, divide the array into two subsets such that the difference between the sum of the subsets is as small as possible.
#include<bits/stdc++.h>
#include "../../helper.hpp"
using namespace std;

pair<vector<int>,vector<int>> solve(vector<int>& a){
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    pair<vector<int>,vector<int>> ans={{},{}};
    int sumi=0;
    int sumj=0;
    for(int i=0;i<a.size();i++){
        if(sumi<=sumj){
            ans.first.push_back(a[i]);
            sumi+=a[i];
        }else{
            ans.second.push_back(a[i]);
            sumj+=a[i];
        }
    }
    return ans;
}

int main(){
    int n;std::cin>>n;
    vector<int> a(n);
    helper::fillArr<int>(a,n);
    pair<vector<int>,vector<int>> p=solve(a);
    helper::printArr<int>(p.first,"Printing first array");
    helper::printArr<int>(p.second,"Printing second array");

}