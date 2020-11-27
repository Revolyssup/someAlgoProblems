/*Koko loves to eat bananas.  There are N piles of bananas, the i-th pile has piles[i] bananas.  The guards have gone and will come back in H hours.

Koko can decide her bananas-per-hour eating speed of K.  Each hour, she chooses some pile of bananas, and eats K bananas from that pile.  If the pile has less than K bananas, she eats all of them instead, and won't eat any more bananas during this hour.

Koko likes to eat slowly, but still wants to finish eating all the bananas before the guards come back.

Return the minimum integer K such that she can eat all the bananas within H hours.
*/


//Completed in nlogn
#include<bits/stdc++.h> 
using namespace std;
class Solution {
public: 
int minEatingSpeed(vector<int>& piles, int H) {
        int max=*max_element(piles.begin(), piles.end()); 
        if(piles.size()==H) return max;
        if(piles.size()==1) return (piles[0]/H)+1;
        int min=1;
        int sum;
        int ans=INT_MAX;
        int i;
        while(min<=max){
            sum=0;
             i=min+(max-min)/2;
             for(int j=0;j<piles.size();j++){
                 sum+=ceil((double)piles[j]/i);
                
            }
            if(sum<=H){
                if(ans>i) ans=i;   
                 max=i-1;
            }
            if(sum>H) min=i+1;

        }

        return ans;
    }
};

int main(){
    Solution sol;
    std::vector<int> nidhi={8,10,7,41};
    std::cout<<sol.minEatingSpeed(nidhi,10)<<std::endl;
}
