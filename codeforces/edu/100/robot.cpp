#include<bits/stdc++.h>

int ans(std::vector<int>& x,std::vector<int>& t);

int main(){
    int t,n;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cin>>n;
        std::vector<int> x(n);
        std::vector<int> t(n);
        for(int j=0;j<n;j++){
             std::cin>>t[j];
             std::cin>>x[j];
        }
        std::cout<<ans(x,t)<<std::endl;
    }
}

int ans(std::vector<int>& x,std::vector<int>& t){
    int init=0;
    int inittime=0;
    int count=0;
    int temp;
    for(int i=0;i<t.size();i++){
        while(inittime<t[i]) inittime++;
        
            while(init!=x[i]){
            temp=-1;
            for(int p=0;p<t.size();p++) {
                if(t[p]==inittime){
                    temp=p;
                    break;
                }
            }

            if(temp!=-1){
                      if(x[temp]==init || x[temp-1]==init) count++;
            }
          


            if(x[i]>init) init++;
            else init--;
            inittime++;
        }

     


    }
    return count;
}