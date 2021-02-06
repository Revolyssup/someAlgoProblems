#include<bits/stdc++.h>

int min(int& a,int b){
    if(a>b) return b;
    return a;
}
int cost(int* arr,int i,int j,int** ans){
    if(j=i+1) return arr[i]*arr[j];
    if(ans[i][j]!=-1) return ans[i][j];
    int answer= INT_MAX;
    for(int p=i+1;p<j;p++){
        answer=min(answer,cost(arr,i,p,ans)+cost(arr,p+1,j,ans)+arr[i]*arr[p]*arr[j]);
    }
    ans[i][j]=answer;
    return answer;
}

int main(){
    int n;
    std::cout<<"Enter number of matrices\n";
    std::cin>>n;
    int* arr=new int[n];
    int** ans=new int*[n];
    for(int i=0;i<n;i++) ans[i]=new int[n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) ans[i][j]=-1; //answer yet to come.
    std::cout<<"Enter number of rows of first n-1 matrices and then row and column of last one\n";
    for(int i=0;i<n;i++) std::cin>>arr[i];
    std::cout<<cost(arr,0,3,ans)<<"\n";


    //deletion
    for(int i=0;i<n;i++) delete[] ans[i];
}   