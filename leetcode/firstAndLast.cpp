// Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].


//Approach:
/*We have to find the range of that number. If we find a number greater or equal to and keep going left to find the first number greater or equal to x,
We will have starting point of the range. Then we can do this for x+1,and we will have 1 more than the ending point of the range.
Its sort of  a modified binary search*/
#include<vector>
#include<iostream>
using namespace std;
class Solution {
    int first_occ_grtrOrequal(vector<int>& nums, int x){
        int first_pos=nums.size(); //doing this by default, so that in case of one element, when it isn't found,it still gives 1,which then becomes 0 in answer.
        int low=0, high=nums.size()-1;
        int mid=low+(high-low)/2;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]>=x){ //current guess for grtr or equal to x. Move leftwards to find first.
                first_pos=mid;
                high=mid-1;
            }
            else{ //go right
                low=mid+1;
            }
        }
        return first_pos;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=first_occ_grtrOrequal(nums,target);
        int j=first_occ_grtrOrequal(nums,target+1)-1;
        if(i<=j) return {i,j};
        else return {-1,-1};
    }
};

//testing
int main(){
    Solution sol;
    vector<int> a={1};
    vector<int> ans=sol.searchRange(a,1);
    std::cout<<"Starting from: "<<ans[0]<<"|| To: "<<ans[1]<<"\n";
}