#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& arr,int k){
    int mini=INT_MAX;
    int index=-1;
    int l=0,r=arr.size()-1;
    int mid;
    while(l<=r){
        mid=(r-l)/2+l;
        if(arr[mid]==k){
            return mid;
        }else if(arr[mid]<k){
            l=mid+1;
        }else{
            index=mid;
            r=mid-1;
        }
    }
    return index;
}

int main(){
    vector<int> a={1, 3, 8, 10, 15};
    std::cout<<"Index: "<<search(a,12)<<"\n";

}