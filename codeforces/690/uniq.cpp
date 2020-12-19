// Codeforces Round #690 (Div. 3)-C
#include<bits/stdc++.h>
int solve(int n,bool* prohb);

int main(){
    int t,n;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cin>>n;
        bool* prohb= new bool[10];
        for(int j=0;j<9;j++) prohb[j]=0;
        std::cout<< solve(n,prohb)<<std::endl;
        delete[] prohb;
    }
    return 0;
}

int solve(int n,bool* prohb){
    if(n>45 && n%10==0) return -1;
    if(n-(n%10)==0) return n; //single digit is thr
    for(int i=9;i>=0;i--){
        if(!prohb[i]){
            prohb[i]=1;
            return i+10*solve(n-i,prohb);
        }
    }
    
    return -1;
}
