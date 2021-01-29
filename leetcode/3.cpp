// Given a string s, find the length of the longest substring without repeating characters.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int max(int& a,int& b){
        if(a>b) return a;
        else return b;
    }

    //return the index on string where the duplicate was found.
    //return -1 if no duplicate found
    int foundat(string& s,char& c){
        int index=0;
        for(auto i:s){
            if(i==c) return index;
            index++;
        }
        return -1;
    }

    void print(string& s1){
           cout<<"ans: ";
        for(auto i:s1){
            cout<<i;
        }
        cout<<"\n";
    }
    int lengthOfLongestSubstring(string s) {
        int max_len=0;
        string s1="";
        int temp;
        int size;
        for(int i=0;i<s.size();i++){
            temp=foundat(s1,s[i]);
            if(temp==-1){
                s1.push_back(s[i]);
                size=s1.size();
                max_len=max(max_len,size);
            }else{
                cout<<"\nbefore: ";
                print(s1);
                 cout<<s[i];
                s1.erase(0,temp+1);
                s1.push_back(s[i]);
                   cout<<"\nafter: ";
                print(s1);
                            
            }
            
        }
     
        
        return max_len;
    }
};

int main(){
    Solution sol;
    string s="aabaab!bb";
    std::cout<<sol.lengthOfLongestSubstring(s);
}