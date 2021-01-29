#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        if(n==1){
            answer.push_back("()");
            return answer;
        }
        vector<string> answertemp=generateParenthesis(n-1);
        for(auto i:answertemp){
            answer.push_back("("+i+")");
            if("()"+i==i+"()"){
                answer.push_back("()"+i);
            }else{
             answer.push_back("()"+i);
            answer.push_back(i+"()");
            }
           
        }
        return answer;
    }
};
int main(){
    Solution s;

    vector<string> a=s.generateParenthesis(3);
    for(auto i:a){
        for(auto j:i){
            std::cout<<j;
        }
        std::cout<<"\n";
    }
}