#include<iostream>
#include<string>
class Solution {
public:
    int check(char c){
        switch(c){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
                
        }
      return 0;  
    }
    
    int romanToInt(std::string s) {
        int last=s.size()-1;
        int curr;
        int prev=0;
        int sum=0;
        for(int i=last;i>-1;i--)
        {
            curr=check(s[i]);
            if(prev>curr){
                sum=sum-curr;
            }
            else{
                sum+=curr;
            }
            prev=curr;
        }
      return sum;  
    }
};


int main(){
    std::cout<<"Enter in Roman: \n";
    std::string Roman;
    Solution sol;
    std::cin>>Roman;
    std::cout<<sol.romanToInt(Roman)<<std::endl;
    return 0;
}