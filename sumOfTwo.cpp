/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.*/


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            vector<int>answer;
            int j;
            for(int i=0;i<nums.size();i++)
            {
                         
                      for(j=i+1;j<nums.size();j++)
                      {
                         if((nums[i]+nums[j])==target) 
                             {
                                 answer.push_back(i);
                                 answer.push_back(j);
                                 return answer;
                             }
                             
                              
                      }
                         
                             
                         
            }
        return answer;
    }
};




int main()
{
	vector<int> question;
	Solution solve;
	int size;
	int target;
	int temp;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	cout<<"Enter Target value"<<endl;
	cin>>target;
	cout<<"Enter elements"<<endl;
	for(int i=0;i<size;i++)
		{
			cout<<"Enter "<<i<<"th element"<<endl;
			cin>>temp;
			question.push_back(temp);
		}

	vector<int> solution=solve.twoSum(question,target);
	cout<<"The indices are:"<<endl;
	if(!solution.empty()) {
	       	for(int i=0;i<solution.size();i++)
		{
		       
			cout<<solution[i]<<endl;
		} 
	}
        else{
                cout<<"The solution found";
        }

return 0;
}
	

	
















