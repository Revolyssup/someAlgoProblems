#include<iostream>

using namespace std;

int answer(int n){
    int q=n/4;
    int r=n%4;
    //top layer
    int total=0;
    switch (r)
    {
    case 0:
        total+=60;
        if(q==0 || (q==1 && r==0)) break;
        else{
            total+=(q*44)+0;
        }
        break;
    case 1:
        total+=20;
        if(q==0 || (q==1 && r==0)) break;
        else{
            total+=(q*44)+12;
        }
        break;
    case 2:
        total+=40;
        if(q==0 || (q==1 && r==0)) break;
        else{
            total+=(q*44)+8;
        }
        break;

    case 3:
        total+=53;
        if(q==0 || (q==1 && r==0)) break;
        else{
            total+=(q*44)+4;
        }
        break;

    default:
        break;
    }

return total;

}

int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        cout<<answer(n)<<"\n";
    }
}