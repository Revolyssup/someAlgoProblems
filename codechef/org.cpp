#include<bits/stdc++.h>

//total n boxes with k duck per box at max
//total n+1 colors 
//each box max have two color ducks
void solve(std::vector<int>& colors,int k){
std::vector<std::pair<std::pair<int,int>,std::pair<int,int>>> box(colors.size()-1); //{ {c1,d1}, {c2,d2}   }
for(int i=0;i<box.size();i++){
box[i]={{0,0},{0,0}};
} 
int j=0;
int i=0;
while(colors.size()!=0){
    if(j>=box.size()) j=j%box.size();
    if(box[j].second.second==0){
        if(colors[i]<=k-box[j].first.second){
            box[j].first.first=i;
            box[j].first.second+=colors[i];
            colors.erase(colors.begin(),colors.begin()+i);
            i++;
        }else{
            box[j].first.first=i;
            box[j].first.second+=k;
            colors[i]-=k;
        }
        j++;
    }
    else{
        if(colors[i]<=k-box[j].second.second){
            box[j].second.first=i;
            box[j].second.second+=colors[i];
            colors.erase(colors.begin(),colors.begin()+i);
            i++;
        }else{
            box[j].second.first=i;
            box[j].second.second+=k;
            colors[i]-=k;
        }
        j++;
    }

    }

    

    for(int i=0;i<box.size();i++){
        std::cout<<box[i].first.first<<" "<<box[i].first.second<<" "<<box[i].second.first<<" "<<box[i].second.second<<std::endl;
    }
}

int main(){
    int t,n,k;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cin>>n;
        std::cin>>k;
        std::vector<int> colors(n+1); //number of duck with color i
        for(int j=0;j<n+1;j++) std::cin>>colors[j];
        solve(colors,k);
    }

}