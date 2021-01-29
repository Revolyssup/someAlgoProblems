#include "./../../helper.hpp"
//696 div2 F

void seTsolns(int p,int q,vi& toCheck, vi& answerSequence,std::vector<vvi>& solns){
    if(!solns[p][q].size()) return;
    Fc(i,p+1,q-1){
        toCheck[p][i]=
    }
}

int main(){
    int x,n,prev;
    CI(n);
    CI(x);
    vi igorCounts(n);
    vi toCheck(n+1);
    prev=x;
    toCheck.push_back(prev);
    Fo(i,0,n) CI(igorCounts[i]);

    //Creating the new sequence
    Fo(i,0,n){
        if(igorCounts[i]>=0){
            toCheck.push_back(prev+igorCounts[i]);
        }else{
            toCheck.push_back(prev-igorCounts[i]);
        }

        prev=igorCounts[i];
    }


    //Solving for LIS
    int countOfMax;
    vi answerSequence;
    //solns[i][j] is the entire array solns.
    std::vector<vvi> solns;

    //intializing for dp
    Fo(i,0,n) Fo(j,0,n){
        if(i==j) solns[i][j].push_back(toCheck[i]);
    }
    seTsolns(0,n,answerSequence,toCheck,solns);

    CO(answerSequence.size());
    
    unsigned long long int accum=0;
    Fo(i,0,answerSequence.size()){
        accum+=answerSequence[i];
    }

    CO(accum%998244353);
}