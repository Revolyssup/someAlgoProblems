#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
//wrong version

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> answers;
        int left,right;
        sort(candidates.begin(),candidates.end());
        for(int i=0;i<candidates.size()-2;i++){
            if(i>0 && candidates[i]==candidates[i-1]) continue;
            left=i+1;
            right=candidates.size()-1;
            while(left<right){
                cout<<"left: "<<left<<" right: "<<right<<"\n";
                if(candidates[left]+candidates[right]+candidates[i]<target) left++;
                else if(candidates[left]+candidates[right]+candidates[i]>target) right--;
                else{
                   
                    answers.push_back({candidates[left],candidates[right],candidates[i]});
                    left++;
                    while(candidates[i]==candidates[i-1]) left++;
                }
            }
        }
        return answers;
    }
};
int main(){
    Solution sol;
    vector<int> b={2,3,6,7};
    vector<vector<int>> a=sol.combinationSum(b,7);
    cout<<"Below are the arrays\n";
    for(auto i:a){
        cout<<"[";
        for(auto j:i){
            cout<<j<<",";
        }
        cout<<"] ";
    }
    cout<<"done\n";
}