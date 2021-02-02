#include<bits/stdc++.h>

int max(int a,int b){
    if(a>b) return a;
    else return b;
}


//Bottom-up approach.
int** solve(int* p,int* w,int n,int maxW){
    int** answers=new int*[n];
    for(int i=0;i<n;i++){
        answers[i]=new int[maxW+1];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=maxW;j++){

        if(j<w[i]){
            answers[i][j]=0;
            continue;
        }

                    //not very good approach,but doing this because I need first time to be 0's and weights and prices are indexed from 0. So that kinda fucks things up.
        if(i==0){
            //for first iteration(All those who exceed weight limit are already excluded in first if block.)
            answers[i][j]=p[i]; 
        }
        else{
            answers[i][j]=max(answers[i-1][j],p[i]+answers[i-1][j-w[i]]);
            }
        }
    }

    return answers;
}

int main(){
    int maxW,n;
    std::cout<<"Enter number of Items:\n";
    std::cin>>n;
    int* prices=new int[n];
    int* weights=new int[n];
    std::cout<<"Enter prices of Items in sequence:\n";
    for(int i=0;i<n;i++){
        std::cin>>prices[i];
    }
    std::cout<<"Enter weghts of Items in same sequence:\n";
    for(int i=0;i<n;i++){
        std::cin>>weights[i];
    }
    std::cout<<"Enter max weight:\n";
    std::cin>>maxW;



    // std::cout<<"Best price you can have is: "<<solve(prices,weights,maxW,n)<<"\n";

    int** ans=solve(prices,weights,n,maxW);
    // std::cout<<"The weights that you should take are:\n";
    // int maxProfit=0;
    // for(int i=0;i<n;i++){
    //     if(ans[n][weights[i]]){
    //         std::cout<<weights[i] <<"kg\n";
    //         maxProfit+=prices[i];
    //     }
    // }
    std::cout<<"Max proft is: "<<ans[n-1][maxW]<<":\n";


    //cleaning
    for(int i=0;i<n;i++) delete[] ans[i];
    delete[] prices;
    delete[] weights;
}