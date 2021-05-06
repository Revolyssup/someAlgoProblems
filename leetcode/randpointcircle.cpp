#include<bits/stdc++.h>

using namespace std;

//below this is leetcode.
class Solution {
    double r,x,y;
public:
    Solution(double radius, double x_center, double y_center):r(radius),x(x_center),y(y_center) {}
    
    vector<double> randPoint() {
        //generate a random number between 0 and 2*pie.
        const int range_from  = 0;
        const int range_to    = acos(0.0)*4;
        std::random_device  rand_dev;
        std::mt19937   generator(rand_dev());
        std::uniform_int_distribution<int>  distr(range_from, range_to);
        double theta=distr(generator);
        double xans=x+r*cos(theta);
        double yans=y+r*sin(theta);
        vector<double> answer={xans,yans};
        return answer;
    }

    bool check(float xin,float yin){// to check if a given point lies on the circle.
        if((x-xin)*(x-xin)+(y-yin)*(y-yin)!=r*r) return true;
        return false;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */




// Above is to be pasted on leetcode



int main(){
    double radius,x_center,y_center;
    std::cout<<"Enter rad , x and y cord (space seperated)\n";
    std::cin>>radius;
    std::cin>>x_center;
    std::cin>>y_center;
  Solution* obj = new Solution(radius, x_center, y_center);
  vector<double> param_1 = obj->randPoint();
    std::cout<<"Random point is: "<<param_1[0]<<", "<<param_1[1]<<"\n";
    if(obj->check(param_1[0],param_1[1])){
        std::cout<<"On the circle\n";
    }
   else std::cout<<"Not On the circle\n";
}