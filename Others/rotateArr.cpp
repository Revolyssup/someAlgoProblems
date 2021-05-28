#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    void doit(vector<int>& nums,int& k, int i,int n,int& count){
        
        if(count==nums.size()) return;
        count++;
        i=(i+k)%(nums.size());
        cout<<"Lifting up "<<nums[i]<<" for next into temp\n";
        int tempN=nums[i];
        cout<<"putting down "<<n<<" on index "<<i<<"\n";
        nums[i]=n;
        doit(nums,k,i,tempN,count);
    }
    void rotate(vector<int>& nums, int k) {
        int count=0;
        doit(nums,k,0,nums[0],count); 
        

    }
};


int main(){
    vector<int> arr={1,2,3,4};
    Solution sol;
    cout<<"Enter k:\n";
    int k;
    cin>>k;
    sol.rotate(arr,k);

        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
}