//Given an array of numbers ,find peak indices

#include<bits/stdc++.h>


//return array of peaks 
std::vector<int> arrOfPeaks(std::vector<int>& a){
    std::vector<int> ans;
    if(a[0]>a[1]) ans.push_back(0);
    for(int i=1;i<a.size()-1;i++){
        if(a[i]>a[i+1] && a[i]>a[i-1]) ans.push_back(i);
    }
    if(a[a.size()-1]>a[a.size()-2]) ans.push_back(a.size()-1);
    return ans;
}

//anyPeak o(logn) (Recursive)
int findPeak(std::vector<int>& a,int l,int r){
    if(r>=l){
        int mid = l + (r - l) / 2; 
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1]) return mid;
    
        if(a[mid]>a[mid-1] && a[mid]<a[mid+1]) return findPeak(a,mid+1,r); 
        else return findPeak(a,l,mid-1); 
    }
    
    return -1;
}


int main(){
    std::vector<int> a={10,1,2,3,4,5,6,8,2000,10,100};
    std::cout<<"First peak  is at "<<findPeak(a,0,11)<<"th index"<<std::endl;
    std::cout<<"All peaks from last are: "<<std::endl;
    for(auto i: arrOfPeaks(a)){
        std::cout<<i<<std::endl;
    }
}