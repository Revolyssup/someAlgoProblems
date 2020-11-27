//Given an integer array nums, return the sum of contiguous subarray (containing at least one number).


#include<bits/stdc++.h>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int accum=INT_MIN;
        int mov=0;
        int count=nums.size();
        for(int i=0;i<count;i++){
            mov+=nums[i];
            if(mov>accum){
                accum=mov;
            }
            if(mov<0){
                mov=0;
            }
    } 
        return accum;
 }          
};
