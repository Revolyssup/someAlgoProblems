/*Given an array nums and a value val, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.*/

#include <bits/stdc++.h> 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=nums.size();
        int newlen=0;
        for(int i=0;i<count;i++){
            if(nums[i]!=val){
                nums[newlen]=nums[i];
                ++newlen;
            }
         
        }
        return newlen;
    }
};