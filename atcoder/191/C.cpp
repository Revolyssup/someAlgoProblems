#include "../../helper.hpp"


int ans(vector<vector<int>>& a){
    
}

int main(){
    int h,w;
    CI(h);CI(w);
    vector<vector<int>> a;
    Fo(i,0,h){
        Fo(j,0,w) CI(a[i][j]);
    }

    CO(ans(a));
}