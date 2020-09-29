#include<bits/stdc++.h>
template<typename T>
class Solution{
    std::vector<T> A;
    std::vector<T> B;
    int** solns;
    int max(int a,int b){
        if(a>b) return a;
        else return b;
    }
    int rec(int i,int j){ //normal recursive approach// i and j are last index of sequence or sub sequence A and B respectively
        if(i<0 || j<0) return 0;  //One of the subsequence is empty
        if(A[i]==B[j]){
            return (rec(i-1,j-1)+1); //If last indices are same that means we can solve for i-1 and j-1 and add 1 to it.
        }
        else{
            return max(rec(i-1,j),rec(i,j-1)); //Modify the problem into two problems and take max of them.
        }
    }
    void dp(){
        for(int i=1;i<A.size()+1;i++){
            for(int j=1;j<B.size()+1;j++){
                 if(solns[i][j]!=0) return;  
                 if(A[i-1]==B[j-1]){
                         solns[i][j]=(solns[i-1][j-1]+1); 
                      }
                 else{
                         solns[i][j]=max(solns[i-1][j],solns[i][j-1]);
                     }
            }
        }
        
    }
    public:
    Solution( std::vector<T>& a,std::vector<T> &b):A(a),B(b){
        solns=new int*[a.size()+1];
        for(int i=0;i<a.size()+1;i++) solns[i]=new int[b.size()+1];
        for(int i=0;i<a.size()+1;i++){
            for(int j=0;j<b.size()+1;j++){
                solns[i][j]=0;
            }
        }
    }
    int solve(){
        return rec(A.size()-1,B.size()-1);
    }
    int solveWithDP(){
        dp();
        return solns[A.size()][B.size()];
    }

};
int main(){
    std::vector<char> A={'A','C','C','G','G','T','C','G','A','G','T','G','C','G','C','G','G','A','A','G','C','C','G','G','C','C','G','A','A'};
    std::vector<char> B={'G','T','C','G','T','T','C','G','G','A','A','T','G','C','C','G','T','T','G','C','T','C','T','G','T','A','A','A'};
    std::vector<int> a={1, 0, 0, 1, 0, 1, 0, 1};
    std::vector<int> b={0, 1, 0, 1, 1, 0, 1, 1, 0};
    Solution<char> sol(A,B);
    Solution<int> sol2(a,b);
    std::cout<<"LCS of A nd B: "<<sol.solveWithDP()<<std::endl;
    std::cout<<"LCS of a nd b: "<<sol2.solveWithDP()<<std::endl;
}