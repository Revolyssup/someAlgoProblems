#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,k,counter=0;
    cin>>n;
    cin>>m;
    std::vector<int> cond1(m);
    std::vector<int> cond2(m);
    for(int i=0;i<m;i++){
        cin>>cond1[i];
        cin>>cond2[i];
    }
    cin>>k;
    vector<int> temp;
    int sent;
    for(int i=0;i<2*k;i++){
        cin>>sent;
        for(auto i:cond1){
            if(cond1[i]==sent){
                temp.push_back(i);
            }
        }

        for(auto i:temp){
            if(cond2[i]==-1){
                cond1[i]=-1;
                counter++;
            }
        }
        temp.clear();
        for(auto i:cond2){
            if(cond2[i]==sent){
                temp.push_back(i);
            }
        }

        for(auto i:temp){
            if(cond1[i]==-1){
                cond2[i]=-1;
                counter++;
            }
        }
    temp.clear();

    }

    cout<<counter<<"\n";
}