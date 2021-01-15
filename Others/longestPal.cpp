#include<bits/stdc++.h>

using namespace std;

//worst solution.
class Solution1 {
public:
    string longestPalindrome(string s) {
        int size=s.size(); //we will check from longest possible string to shortest possible. So that the 1st string we get is ans.
        int count=0; //aux
        int start;
        int end;
        float tempstart;
        float tempend;
        while(size>0){
        start=0;
        end=size+start-1;
        //check all substrings of this size.
        while(end<s.size()){
            tempstart=start;
            tempend=end;
            //look for palindrome
            while(start<=end){
               
                if(s[start]!=s[end]){
                    break;
                }else{
                    start++;
                    end--;
                    count++;
                }
            }
             
            if(ceil((tempend-tempstart+1)/2)==count){
                return s.substr(tempstart,size);
            } 
            count=0;
            start=tempstart+1; //check next string of this size.
            end=tempend+1;
        }

        size--; //check for next size;
    }

    return "Fuck";
    }
};

int main(){
    Solution1 s;
    std::cout<<s.longestPalindrome(string("ac"))<<std::endl;
}