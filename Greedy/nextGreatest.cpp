// Given a circular array (the next element of the last element is the first element of the array), print the Next Greater Number for every element. 
//The Next Greater Number of a number x is the first greater number to its traversing-order next in the array, 
//which means you could search circularly to find its next greater number. If it doesn't exist, output -1 for this number.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
            vector<int> ans(nums.size(),-1);
            

























            /****************************************Naive approach*******************/
            // for(int i=0;i<nums.size();i++){
            //     if(ans[i]==-1){
            //         int j;
            //         if(i==nums.size()-1) j=0;
            //         else j=i+1;
            //         while(j!=i){
            //             if(nums[j]>nums[i]) break; // We found the nextGreatest
            //             j++;
            //             if(j>=nums.size()) j=j%nums.size();
            //         }
            //         if(i!=j){
            //             // ans[i]=nums[j];
            //             int k=i;
            //             while(k!=j){
            //                 ans[k]=nums[j];
            //                 k++;
            //                 if(k>=nums.size()) break;
            //             }
            //         }
            //     }
            // }
            return ans;
    }
};

int main(){
    Solution sol;
    vector<int> ele={2,3,4,3};
    vector<int> ans=sol.nextGreaterElements(ele);
    for(int i=0;i<ans.size();i++){
        std::cout<<ans[i]<<" ";
    }
     std::cout<<std::endl;
}