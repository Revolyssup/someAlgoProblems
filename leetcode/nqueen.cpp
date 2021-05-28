// The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

// Given an integer n, return all distinct solutions to the n-queens puzzle.

// Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> answer;
    map<int,bool> col,d1,d2;
    int count=0;
    void solve(int y,int& n, vector<string>& temp){
        if(y==n){
            answer.push_back(temp);
            temp.empty();
            return;
        }

        for(int colx=0;colx<n;colx++){
            if( col[colx] || d1[colx+y] || d2[colx-y+n-1] ) continue;
            col[colx]=d1[colx+y]=d2[colx-y+n-1]=1;
            string temps;
            for(int i=0;i<n;i++){
                if(i==colx) temps.push_back('Q');
                else temps.push_back('.');
            }
            temp.push_back(temps);
            solve(y+1,n,temp);
            col[colx]=d1[colx+y]=d2[colx-y+n-1]=0;
            temp.clear();
        }

        temp.clear();
    }
    vector<vector<string>> solveNQueens(int n) {
        std::vector<string> temp(n);
        solve(0,n,temp);
        return answer;
    }
};


int main(){
    Solution sol; 
    auto v=sol.solveNQueens(4);
    for(auto i: v){
        std::cout<<"[";
        for(auto j: i){
             std::cout<<"[";
           for(auto k: j){
               cout<<k;
           }
            std::cout<<"],";
            
        }
       std::cout<<"]";
        std::cout<<"\n";
    }
}