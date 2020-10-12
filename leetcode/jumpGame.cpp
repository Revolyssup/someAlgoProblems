// Given an array of non-negative integers, you are initially positioned at the first index of the array.

// Each element in the array represents your maximum jump length at that position.

// Determine if you are able to reach the last index.
#include<bits/stdc++.h>

int yes(int* ans,int n){
    for(int i=0;i<n;i++){
        if(ans[i]) return i;
    }
    return 0;
}
void solve(std::vector<int>& nums,int* ans){
    for(int i=nums.size()-2;i>-1;i--){
       if(nums[i]>=yes(ans,nums.size())-i) ans[i]=1;
       else ans[i]=0;
    }
}
   bool canJump(std::vector<int>& nums) {
       int* ans=new int[nums.size()];
       for(int i=0;i<nums.size()-1;i++){
           ans[i]=0;
       }
        ans[nums.size()-1]=1;
        solve(nums,ans);
        return ans[0];
    }


int main(){
    std::vector<int> a={2,3,1,1,4};
    std::cout<<canJump(a)<<"\n";
}