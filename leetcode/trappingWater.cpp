#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int minh(int& a,int& b){
        if(a<b) return a;
        else return b;
    }  
    int max(int& a,int& b){
        if(a<b) return b;
        else return a;
    }    

    //brute force
    int trap(vector<int>& height) {
        
    }
};

int main(){
    Solution sol;
    vector<int> h={4,2,0,3,2,5};
    std::cout<<sol.trap(h)<<"\n";
}