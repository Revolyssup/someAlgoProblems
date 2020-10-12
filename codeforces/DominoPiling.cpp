// You are given a rectangular board of M × N squares. Also you are given an unlimited number of standard domino pieces of 2 × 1 squares. 
//You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following conditions:

// 1. Each domino completely covers two squares.

// 2. No two dominoes overlap.

// 3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

// Find the maximum number of dominoes, which can be placed under these restrictions.

// Input
// In a single line you are given two integers M and N — board sizes in squares (1 ≤ M ≤ N ≤ 16).

// Output
// Output one number — the maximal number of dominoes, which can be placed.
#include<bits/stdc++.h>
int** create2darr(int k,int row,int col){
           int** arr=new int*[row];
            for(int i=0;i<row;i++){
                arr[i]=new int[col];
            }

            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    arr[i][j]=k;
                }
            }
        return arr;
       }
int solve(int** mn,int m,int n){
    
}
int solution(int m,int n){
    int** mn=create2darr(0,m,n);
    return solve(mn,m,n);
    
}
int main(){
    int m,n;
    std::cin>>m>>n;
    solution(m,n);
    std::cout<<mn[m-1][n-1];
}