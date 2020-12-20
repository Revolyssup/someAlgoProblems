#include<bits/stdc++.h>


void solve(int x,int y,int n,std::set<std::pair<int,int>>& cord,int prevDir,std::vector<std::vector<bool>>& ans){
    if(ans[x][y]==1) return;
    if(n==0){
        cord.insert({x,y});
        ans[x][y]=1;
        return;
    }
    if(prevDir==0){
    solve(x+1,y,n-1,cord,2,ans);
    solve(x-1,y,n-1,cord,-2,ans);
    solve(x,y+1,n-1,cord,1,ans);
    solve(x,y-1,n-1,cord,-1,ans);
    }
    else if(prevDir==1 || prevDir==-1){
    solve(x+1,y,n-1,cord,2,ans);
    solve(x-1,y,n-1,cord,-2,ans);
    }
    else {
    solve(x,y+1,n-1,cord,1,ans);
    solve(x,y-1,n-1,cord,-1,ans);
    }

}

int main(){
    //top-down=-1;
    //down-up=1
    //left-right=2;
    //right-left=-2;
    //origin=0;
    int n,prevDir;
    prevDir=0;
    std::cin>>n;
    std::set<std::pair<int,int>> cord;
    std::vector<std::vector<bool>> dp(n);
    solve(0,0,n,cord,prevDir,dp);

    std::cout<<cord.size()<<std::endl;
    return 0;
}