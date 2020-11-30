// In the activity-selection problem, we wish to select a maximum-size
// subset of mutually compatible activities.

#include<bits/stdc++.h>
#include "../../ds-algo-atstl/atstllib/atstl.hpp"
int max(int a,int b){
    if(a>b) return a;
    else return b;
}

bool isCompatible(int si,int fi,int sj,int fj){ //To check if two activities are compatible
    if(si>=fj || sj>=fi) return true;
    else return false;
}
void solve(int act[][2],int size,int** ans){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
              if(isCompatible(act[i][0],act[i][1],act[j][0],act[j][1])){
                  for(int k=i;k<j;k++){
                       ans[i][j]=max(ans[i][j],(ans[i][k-1]+ans[k+1][j]+1));
                     }  
                }
            else ans[i][j]=0; //if activities are not compatible ,we wont consider them.
        }
    }
}

int dpApproach(int activities[][2], int size){
    int** answers=new int*[size];
    for(int i=0;i<size;i++){
        answers[i]=new int[size];
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            answers[i][j]=0;
        }
    }
    solve(activities,size,answers);
    return answers[0][size-1];
}


int greedy(int arr[][2],int size){ //We start from k=0, as that has the minimum final time,so acc to greedy its the best to start with
    int k=0;
    int total=1;
    for(int m=1;m<size;m++){
        if(arr[m][0]>=arr[k][1]){
            total++;
            k=m;
        }
    }
    return total;
}

int main(){
    int ans[][2]={{1,4},{3,5},{0,6},{5,7},{3,9},{5,9},{6,10},{8,11},{8,12},{2,14},{12,16}};
     //Note that activities are given in second index(finish time)  sorted  order. 
    // This type of finish time sorting will help us in greedy approach.
    auto start=std::chrono::high_resolution_clock::now();
    auto greed=greedy(ans,11);
    auto end=std::chrono::high_resolution_clock::now();
    auto duration=std::chrono::duration_cast<std::chrono::microseconds>(end-start);
    std::cout<<"The time taken above with greedy: "<<duration.count()<<"\n";

    auto start1=std::chrono::high_resolution_clock::now();
    auto dp=dpApproach(ans,11);
    auto end1=std::chrono::high_resolution_clock::now();
    auto duration1=std::chrono::duration_cast<std::chrono::microseconds>(end1-start1);
    std::cout<<"The time taken with dp: "<<duration1.count()<<"\n";

    std::cout<<"Longest compatible activities(without greedy): "<<dp<<"\n";
    std::cout<<"Longest compatible activities(with greedy): "<<greed<<"\n";
}