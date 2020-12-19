#include<bits/stdc++.h>


void solve(int x,int y,int n,std::unordered_set<std::pair<int,int>>& cord,int prevDir){
    if(n==0){
        cord.insert({x,y});
        return;
    }
    if(prevDir==0){
    solve(x+1,y,n-1,cord,2);
    solve(x-1,y,n-1,cord,-2);
    solve(x,y+1,n-1,cord,1);
    solve(x,y-1,n-1,cord,-1);
    }
    else if(prevDir==1 || prevDir==-1){
    solve(x+1,y,n-1,cord,2);
    solve(x-1,y,n-1,cord,-2);
    }
    else {
    solve(x,y+1,n-1,cord,1);
    solve(x,y-1,n-1,cord,-1);
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
    std::unordered_set<std::pair<int,int>> cord;
    solve(0,0,n,cord,prevDir);
    std::cout<<cord.size()<<std::endl;
    return 0;
}