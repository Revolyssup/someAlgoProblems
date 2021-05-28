#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans(nums.size());
        ans[0]=1;
        for(int i=1;i<ans.size();i++){
            int max=0;
            for(int j=i-1;j>-1;j--){

                if(nums[j]<nums[i] && ans[j]>max){
                    max=ans[j];
                } 
            }
            ans[i]=max+1;
        }
        return ans[ans.size()-1];
        
    }
};

int main(){

    vector<int> nums={7,7,7,7,7,7,7};
    Solution sol;
    cout<<sol.lengthOfLIS(nums)<<"\n";
}