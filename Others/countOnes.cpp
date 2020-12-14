/* Basically you pass a positive integer n as argument, and giveOnes return an array 
   counting number of ones in binary form of all the numbers in range [0,n].*/
#include <iostream>
#include<cmath>
#include<vector>
using namespace std;

vector<int> giveOnes(int n)
{
        vector<int> ans;
        int power;
        int ones;
        int temp;
        for(int i=0;i<=n;i++)
        {
                ones=0;
                power=0;
                temp=i;
                while(temp!=0){
                        temp=temp/2;
                        power++;

                }
                temp=1;
                while(temp<=pow(2,power)){
                        if(temp&i) ones++;
                        temp*=2;
                }
                
            ans.push_back(ones);        
        }
   return ans;        
}


int main()
{
    vector<int> answer=giveOnes(15);        
    for(int i=0;i<answer.size();i++){
            std::cout <<answer[i] <<" ";
    }

    return 0;
}
