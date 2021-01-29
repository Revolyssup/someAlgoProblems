// Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.
#include<bits/stdc++.h>
using namespace std;
    class Solution {
    public:

        vector<vector<int>> threeSum(vector<int>& nums) {
                vector<vector<int>> ans;
                if(nums.size()<3) return ans;
                int left,right,tempsum;
                sort(nums.begin(),nums.end());
                for(int i=0;i<nums.size()-2;i++){

                    
                    if(i>0 && nums[i]==nums[i-1]) continue;
                    //solving two sum.
                    left=i+1;
                    right=nums.size()-1;
                    while(left<right){

                        tempsum=nums[i]+nums[left]+nums[right];
                         cout<<"here"<<tempsum;
                        if(tempsum<0) left++;
                        else if(tempsum>0) right--;
                        else{
                            ans.push_back({nums[i],nums[left],nums[right]});
                            left++;
                            while(nums[left]==nums[left-1] && left<right) left++;

                        } 
                    }
                    
                }
                return ans;
        }
    };

    int main(){
        Solution sol;
        std::vector<int> a={-1,0,1,2,-1,-4};
        std::vector<std::vector<int>> ans=sol.threeSum(a);
        for(auto i:ans){
            for(auto j:i){
                std::cout<<j<<" ";
            }
            std::cout<<"\n";
        }
    }