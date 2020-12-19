#include<bits/stdc++.h>
using namespace std;
//returns 1 for red, -1 for blue and 0 for draw
int winner(int red,int blue);


void combinationUtil(std::vector<int>& arr, int data[],  
                    int start, int end,  
                    int index, int r,std::vector<int>& bruh)  
{  
    // Current combination is ready 
    // to be printed, print it  
    if (index == r)  
    {  
        for (int j = 0; j < r; j++)  
            bruh.push_back(data[j]);
        return;  
    }  
  
    // replace index with all possible  
    // elements. The condition "end-i+1 >= r-index" 
    // makes sure that including one element  
    // at index will make a combination with  
    // remaining elements at remaining positions  
    for (int i = start; i <= end &&  
        end - i + 1 >= r - index; i++)  
    {  
        data[index] = arr[i];  
        combinationUtil(arr, data, i+1,  
                        end, index+1, r,bruh);  
    }  
}  
std::vector<int> giveVector(int a){
    std::vector<int> accum;
    int temp;
    while(a!=(a%10)){
        temp=a%10;
        accum.push_back(temp);
        a-=(a%10);
        a/=10;
    }
    accum.push_back(a);
    return accum;
}
int main(){
    int t,n,red,blue;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cin>>n;
        std::cin>>red;
        std::cin>>blue;
        int ans=winner(red,blue);
        if(ans>0) std::cout<<"RED"<<std::endl;
        else if(ans<0) std::cout<<"BLUE"<<std::endl;
        else std::cout<<"EQUAL"<<std::endl;
    }
}


int winner(int red,int blue){
std::vector<int> redarr=giveVector(red);
std::vector<int> bluearr=giveVector(blue);
std::vector<int> redComb;
std::vector<int> blueComb;
int data1[redarr.size()];
int data2[bluearr.size()];
combinationUtil(redarr, data1, 0, redarr.size()-1, 0, redarr.size(),redComb);
combinationUtil(redarr, data1, 0, redarr.size()-1, 0, redarr.size(),blueComb);

int ans=0;
for(int i=0;i<redComb.size();i++){
    for(int j=0;j<blueComb.size();j++){
        if(redComb[i]>blueComb[j]) ans++;
        else if(redComb[i]<blueComb[j]) ans--;
    }
    }
return ans;
}