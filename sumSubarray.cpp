//To find subset in a set of n numbers thats sums up to a given value.
#include <iostream>
#include<vector>
using namespace std;

vector<int> getMasks(int *arr, int sum, int n)
{
        vector<int> masks;
        for(int mask=0;mask<(1<<n);mask++)
        {
                int curr_sum=0;
                for(int i=0;i<n;i++)
                {
                        if(mask&(1<<i))
                        {
                                curr_sum+=arr[i];
                        }
                }
                if(curr_sum==sum) masks.push_back(mask);
        }
   return masks;      
}

std::vector<vector<int>> getEl(int *arr, int sum, int n)
{
        vector<int> masks=getMasks(arr,sum,n);
         for(auto val: masks)
         {
           cout<<val<<" ";
         }
        vector<vector<int>> answers;
        vector<int> answer;
         for(auto mask: masks)
         {
            for(int i=0;i<n;i++)
                {
                        if(mask&(1<<i))
                        {
                           answer.push_back(arr[i]); 
                         
                        }
                 }
                answers.push_back(answer);
                 while(!answer.empty()) 
                 {
                
                         answer.pop_back();
        
                 }       

         }
        
        return answers;
                
}



int main()
{
   int arr[]={0,1,2,3,4,6,7,8,9,10};
   vector<vector<int>> getsub =getEl(arr,10,11);
   for(auto val: getsub)
   {
           for(auto x: val)
         {
                cout<<x;
         }
         cout<<endl;
         
   }
             
    return 0;
}
