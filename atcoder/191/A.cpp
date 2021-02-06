#include "../../helper.hpp"

bool ans(double vbs,double vbt,double d){
    if(vbs>=d && d>=vbt) return false;
    return true;
}
int main(){
        double v,t,s,d;
        CI(v);CI(t);CI(s);CI(d);
        double vbs=v*s;
        double vbt=v*t;
        if(ans(vbs,vbt,d)) CO("Yes");
        else CO("No");
}