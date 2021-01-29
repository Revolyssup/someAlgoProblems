#include<iostream>
#include<chrono>
#include<climits>
#include<bits/stdc++.h>
long long int max(long long int a,long long int b);
int cut_rod(int* prices,int n);
int dp_cut_rod_tdm(int* prices,int n); //dp approach (top-down memoization)
int solvetdm(int* prices,int n,int* mem);
/*Given an array p where p[i] is the price of rod length i+1.
And a given rod of length n,you have to make an optimal substructure in order to return an optimal solutin.
Here an optimal solution is the best price obtained by cutting the rod in best ways*/
/*Rn=max(Pi + R(n-i)),i ranges from 1 to n*/
/*Rn is optimal price of n length.Pi is price of remaining constant length
This is an optimal substructure as optimizing the subproblems will inturn optimize the original problem*/

//Assuming that the len=n of rod will always be less or equal to size 

//Non-DP approach
int cut_rod(int* prices,int n){
        if(n==0) return 0; //base case
        if(n==1) return prices[0];
        int max_val=INT_MIN;
        for(int i=1;i<=n;i++){
            max_val=max(max_val,prices[i]+cut_rod(prices,n-i));
        }
        return max_val;
}


//DP approach
//Top-down memoization //Recursive
/*In normal recursive approach we are solving same sub-sub problems in multiple sub problems.
So in order to save computing time,we can store the optimization solution of subproblem Ri in an array,and check in it instead of recomputing */
int dp_cut_rod_tdm(int* prices,int n){
        int* mem=new int[n+1]; //to store solution of subproblems Ri where i ranges from 0 to n.
        for(int i=0;i<=n;i++) mem[i]=INT_MIN; //setting initial values of subproblem solutions.
        int ans=solvetdm(prices,n,mem);
        delete[] mem;
        return ans;
}

int solvetdm(int* prices,int n,int* mem){
     if(n==0) return 0; //base case
    if(mem[n]>=0) return mem[n]; //This problem has already been solved.
    int max_val=INT_MIN;
    for(int i=1;i<=n;i++) max_val=max(max_val,prices[i]+solvetdm(prices,n-i,mem));
    mem[n]=max_val; //saving the solution for future lookup
    return max_val;
}



//Bottom-up memoization
/*It is an iterative approach thus instead of recursively solving from top to down.
We solve smaller problems first and based on those we solve bigger subproblems*/
int dp_cut_rod_bum(int* prices,int n){
    int* mem=new int[n+1];
    for(int i=0;i<=n;i++) mem[i]=INT_MIN; //As we will already start from smallest problems,no need to initialize as minus infinite.
    mem[0]=0;
    for(int i=1;i<=n;i++){
        // if(mem[i]>=0) return mem[i];
        int max_val=INT_MIN;
        for(int j=1;j<=i;j++){
            max_val=max(max_val,prices[j]+mem[i-j]);
        }
        mem[i]=max_val;
    }
    return mem[n];
}


//given two values it returns the bigger one.
long long int max(long long int a,long long int b){
    if(a>b) return a;
    else return b;
}

int main(){
  
    int prices[]={0,1,5,8,9,10,17,17,20,24,30,50,6,2,18,49,45,48,50,63,89,78,42,10,79,23,49,89,3,8,79}; //ith index represents price of ith len. So 0th index will always be zero.
    int n;
    std::cin>>n;
    // auto start=std::chrono::high_resolution_clock::now();
    // int ans=cut_rod(prices,n);
    // auto end=std::chrono::high_resolution_clock::now();
    // auto duration=std::chrono::duration_cast<std::chrono::microseconds>(end-start);
    // std::cout<<ans<<"normal with microseconds "<<duration.count()<<"\n";
    // start=std::chrono::high_resolution_clock::now();
    // ans=dp_cut_rod_tdm(prices,n);
    // end=std::chrono::high_resolution_clock::now();
    // duration=std::chrono::duration_cast<std::chrono::microseconds>(end-start);
    // std::cout<<ans<<"top down rec with microseconds "<<duration.count()<<"\n";

    // start=std::chrono::high_resolution_clock::now();
    // ans=dp_cut_rod_bum(prices,n);
    // end=std::chrono::high_resolution_clock::now();
    // duration=std::chrono::duration_cast<std::chrono::microseconds>(end-start);
    // std::cout<<ans<<"bottom up iterative with microseconds "<<duration.count()<<"\n";
}