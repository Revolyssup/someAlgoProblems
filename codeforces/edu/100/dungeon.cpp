#include<bits/stdc++.h>

bool can(int a,int b,int c);
int min(int a,int b,int c){
    if(a==0) a=INT_MAX;
    if(b==0) b=INT_MAX;
    if(c==0) c=INT_MAX;
    if(a<b){
        if(a<c) return a;
        else return c;
    }
    else{
        if(a<c) return a;
        else return b;
    }
}

int nonz(int a,int b,int c){
    int count=0;
    if(a!=0) count++;
    if(b!=0) count++;
    if(c!=0) count++;
    return count;
}
int main(){
    int a,b,c,t;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cin>>a;
        std::cin>>b;
        std::cin>>c;
        if(can(a,b,c)) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
    }
    return 0;
}

// bool can(int a,int b, int c){

// }
bool can(int a,int b,int c){
   
    int nonZeroes=nonz(a,b,c);
     if(nonZeroes<3) return false;
    int i=min(a,b,c);
    nonZeroes+=6;
    int x=(a+b+c)%nonZeroes;
    if(x==0){
        int y=(a+b+c)/nonZeroes;
        if(y>i) return false;
        else return true;
    }
    else return false;
}