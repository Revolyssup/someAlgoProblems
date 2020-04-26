#include <iostream>
#include<cmath>

using namespace std;

/*This function takes ith row and jth column and checks if there already exists a given number.
  Also it takes the 3 by 3 subgrid and checks if the number exists there.If all conditions satisfy and there is no such number then it returns true*/

bool check(int* arr,int p,int q,int n){
        for(int i=0;i<p;i++)
        {
                if(*(arr+i*9+q)==n) return false;
        }
          for(int i=0;i<q;i++)
        {
                if(*(arr+p*9+i)==n) return false;
        }

        int x=(floor(p/3))*3;
        int y=(floor(q/3))*3;
        for(int i=0;i<x;i++)
        {
                for(int j=0;j<y;j++)
                {
                        if(*(arr+i*y+j)==n) return false;
                }
        }
        return true;

}


/*This function uses heavy recursion. This function checks and puts the number and then further call solve recursively*/

void solve(int* arr){
        for(int i=0;i<9;i++)
        {
                for(int j=0;j<9;j++)
                {
                        if(arr[i*j]==0){
                                for(int k=0;k<9;k++){
                                        if(check(arr,i,j,k))
                                        {
                                                arr[i*j]=k;
                                                solve(arr);
                                                arr[i*j]=0;
                                        }
                                }
                        }
                }
        }
}


/*Used to enter elements*/

void Enter(int* arr){
    int temp;
        for(int i=0;i<9;i++)
    {
            for(int j=0;j<9;j++)
            {
                cout<<"enter "<<i<<"th "<<j<<"th element"<<endl;

                std::cin >>temp ;
                *(arr+i*9+j)=temp;
            }
    }
}


/*Used to print grid*/

void print(int* arr){
        for(int i=0;i<9;i++)
    {
            for(int j=0;j<9;j++)
            {

               cout<<*(arr+i*9+j)<<" ";

            }
        cout<<endl;
    }
}







//Hy utkarsh

int main()
{
    int* arr= new int[3*3];
    Enter(arr);
    cout<<"Entered array is :"<<endl;
    print(arr);
    solve(arr);
    print(arr);
    return 0;
}
