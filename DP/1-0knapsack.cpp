#include<bits/stdc++.h>

int max(int a,int b){
    if(a>b) return a;
    else return b;
}

int solve(int arr[][2],int p,int q,int w,int* ans){
    if(ans[w]!=-1) return ans[w];
    if(w<=0) return 0;
     if(p==q) return arr[p][0];
    int answer=-1;
    for(int i=p;i<=q;i++){
        answer=max(answer,(solve(arr,p,i-1,w-arr[i][1],ans)+solve(arr,i+1,q,w-arr[i][1],ans)+arr[i][0]));
    }
    ans[w]=answer;
    return answer;
}
int yo(int arr[][2],int n,int w){
    int* ans=new int[w+1];
    for(int i=0;i<=w;i++){
        ans[i]=-1;
    }
    return solve(arr,0,n-1,w,ans);
}

int main(){
    int n;
    std::cin>>n;
    int arr[][2]={{60,10},{100,20},{120,30}};
    std::cout<<yo(arr,3,n-1)<<"\n";
}