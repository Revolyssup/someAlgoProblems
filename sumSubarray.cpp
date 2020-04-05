//To find all subsets in a set of n numbers that sum up to a given value.
#include <iostream>
#include<vector>
using namespace std;



/*This function basically returns a set of all the bitmasks which correspond to a subset of the given set.
  For instance- "17" has a binary value of 10001 which corresponds to a subset containing the element at only 4th and 0th position.Therefore if 
  given set was {1,2,3,4,5,6}, the corresponding subset would be {1,5}. Ergo, "17" corresponds to subset {1,5}. Each bitmask will correpond
  to different subsets. */
 
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





/*Here, the function is returning a vector of all the subsets which sum to a given value*/

std::vector<vector<int>> getAllSubsets(int *arr, int sum, int n)
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
   vector<vector<int>> getsub =getAllSubsets(arr,10,11);
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
