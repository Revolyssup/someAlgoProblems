#include<bits/stdc++.h>

int main(){
    int n,m,k,x1temp,y1temp,x2temp,y2temp;
    std::cin>>n;
    std::cin>>m;
    std::cin>>k;
    std::vector<int> xcount(n+1);
    for(int i=0;i<n+1;i++) xcount[i]=0;
    std::vector<int> ycount(m+1);  //to keep the convention from 1 to ...
    for(int i=0;i<m+1;i++) ycount[i]=0;
    std::vector<std::pair<std::pair<int,int>,std::pair<int,int>>> cord(k);
    for(int p=0;p<k;p++){
        int xtemp,ytemp;
        std::cin>>x1temp;
        std::cin>>y1temp;
        std::cin>>x2temp;
        std::cin>>y2temp;
        cord.push_back({{x1temp,y1temp},{x2temp,y2temp}});
    }

    for(int p=0;p<cord.size();p++){
        xcount+=(cord[p].second.first-cord[p].first.first);
    }

}