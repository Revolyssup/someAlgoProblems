#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minh(int& a,int& b){
        if(a<b) return a;
        else return b;
    }

    int maxm(int& a,int& b){
        if(a<b) return b;
        else return a;
    }   
    //O(nsquare)
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxArea=INT_MIN;
        int area;
        while(i<j){
            area=(j-i)*minh(height[i],height[j]);
            maxArea=maxm(maxArea,area);
            if(minh(height[i],height[j])==height[i]) i++;
            else j--;
        }
        return maxArea;
    }
};


int main(){
    std::vector<int> a={1,8,6,2,5,4,8,3,7};
    Solution sol;
    std::cout<<"jhd; "<<sol.maxArea(a)<<std::endl;
}