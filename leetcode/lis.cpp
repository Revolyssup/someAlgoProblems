#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans(nums.size());
        int toReturn=1;
        ans[0]=1;
        for(int i=1;i<nums.size();i++){
            int max=0;
            for(int j=i-1;j>=0;j--){

                if(nums[j]<nums[i] && ans[j]>max){
                    max=ans[j];
                } 
            }
         
            ans[i]=max+1;
            if(ans[i]>toReturn) toReturn=ans[i];
        }
        return toReturn;
    }
};

int main(){

    vector<int> nums={1,3,6,7,9,4,10,5,6};
    Solution sol;
    cout<<sol.lengthOfLIS(nums)<<"\n";
}