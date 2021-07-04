#include<bits/stdc++.h>
using namespace std;
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.



class Solution {
public:
    bool isValid(string s) {
        stack<char> charstack;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                charstack.push(s[i]);
            }else{
                 if(charstack.empty()) return false;
                switch (s[i])
                {
                case ')':
                    if(charstack.top()!='(') return false;
                    break;
                case '}':
                    if(charstack.top()!='{') return false;
                    break;
                case ']':
                    if(charstack.top()!='[') return false;
                    break;
    
                default:
                    break;
                }
                charstack.pop();
            }

        }
        if(charstack.empty()) return true;
        return false;
    }
};
int main(){
    Solution sol;
    for(int i=0;i<5;i++){
        std::cout<<"Enter: \n";
        string n;
        std::cin>>n;
        std::cout<<"Validity: "<<sol.isValid(n)<<"\n";
    }
    std::cout<<"\n"; 
}