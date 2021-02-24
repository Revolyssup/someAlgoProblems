// Longest Substring with not more than K Distinct Characters

#include "../../helper.hpp"

int run(string& s,int k){
    int ans=INT_MIN;
    int len=0;
    int right=0;
    map<char,int> b;
    Fo(left,0,s.size()){
        while(b.size()<k && right<s.size()){
            if(b.size()==k && !b[s[right]]){ //we dont want to go ahead
                right--;
                break;
            }
            if(!b.count(s[right])){
                b.insert({s[right],1});
                // cout<<"Inserted: ";CO(s[right]);
            }else{
                b[s[right]]+=1;
                // cout<<"Incremented: ";CO(s[right]);
            }
            
            right++;
            // cout<<"Size of map after above iteration is: ";CO(b.size());
        }
        //either erase the element at left if its frequency is 1 or decrement it.
        if(b[s[left]]==1) b.erase(s[left]);
        else b[s[left]]-=1;
        // cout<<"Decremented / removed: ";CO(s[left]);
        len=right-left+1;
        // cout<<"left and right is ";CO(left);CO(right);
        ans=max(ans,len);
    }
    return ans;
}
int main(){
    string s;
    CI(s);
    int k;
    CI(k);
    CO(run(s,k));


}