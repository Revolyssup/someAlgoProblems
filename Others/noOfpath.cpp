#include<bits/stdc++.h>

//Write a function that takes in input a m by n matrix and spits out the number of ways you can travel from top-left to bottom-right.

//constraints: You can only move down or right,one unit at a time.
int noOfWays(int m,int n){
        if(m==1 || n==1) return 1;
    return noOfWays(m-1,n)+noOfWays(m,n-1); //either will move one unit right or one unit down.
}

int main(){
    int m,n;
    std::cout<<"Enter m: \n";
    std::cin>>m;
    std::cout<<"Enter n: \n";
    std::cin>>n;
    std::cout<<"No of ways to travel a "<<m<<" by "<<n<<" matrix is: "<<noOfWays(m,n)<<std::endl;
}