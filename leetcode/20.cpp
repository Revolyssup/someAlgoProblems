#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    bool isValid(string s) {
        vector<char> ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                ans.push_back(s[i]);
            }else if(s[i]==')'){
                if(ans[ans.size()-1] !='('){    
                   ans.pop_back();
                    return false;
                } 
                ans.pop_back();
            }

            if(s[i]=='{'){
                ans.push_back(s[i]);
            }else if(s[i]=='}'){
                if(ans[ans.size()-1] !='{') {    
                   ans.pop_back();
                    return false;
                }
                ans.pop_back();
            }
            if(s[i]=='['){
                ans.push_back(s[i]);
            }else if(s[i]==']'){
                if(ans[ans.size()-1] !='[') {    
                   ans.pop_back();
                    return false;
                }
                ans.pop_back();
            }            
        }
        return true;
    }
};

int main(){
    string s="()(";
    Solution sol;
    cout<<sol.isValid(s);
}
