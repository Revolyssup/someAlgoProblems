#include<iostream>
int main(){
    int n;
    std::cin>>n;
    for(int i=10;i>1;i--){
        if(n%i==0){
            std::cout<<i<<"\n";
            return 0;
        }
    }
    std::cout<<1<<"\n";
}