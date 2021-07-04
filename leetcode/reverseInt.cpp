#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long int rev=0;
        unsigned int y=x;
        if(x<0){
            y=-y;
        }
        while(y!=0){
            rev=rev*10+(y%10);
            y/=10;
        }
        if(rev>2147483647) return 0;
        int ans= (int)rev;
        if(x<0) ans=-ans;
        return ans;
    }
};
int main(){
    Solution sol;
    for(int i=0;i<5;i++){
        std::cout<<"Enter: \n";
        int n;
        std::cin>>n;
        std::cout<<"Reversed: "<<sol.reverse(n)<<"\n";
    }
    std::cout<<"\n";

}