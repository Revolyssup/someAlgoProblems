#include<iostream>
using namespace std;

int ans(int n){
    int counter=1; //one when its alone,
    int left=-(n-1),right=n;
    int sum=right;

    while(left<right){
        //we will throw away the number which takes us farther than n.
        if(sum==n){
            counter++;
        }
        if(abs((sum-left)-(n))<abs((sum-right)-(n))){
            //  cout<<"\nChanging left: "<<left<<"\n";
             sum=sum-left;
             left++;
            //   cout<<"\nleft after change: "<<left<<"\n";
        }
        else{
            //  cout<<"\nchanging right: "<<right<<"\n";
             sum=sum-right;
             right--;
            //   cout<<"\nright after change: "<<right<<"\n";
        }

    }
    return counter;
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<ans(n)<<std::endl;
}