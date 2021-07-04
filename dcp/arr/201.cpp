/*
You are given an arra  of arrays of integers, where each array corresponds to a row in a triangle of numbers. For example, [[1], [2, 3], [1, 5, 1]] represents the triangle:

  1
 2 3
1 5 1
We define a path in the triangle to start at the top and go down one row at a time to an adjacent value, eventually ending with an entry on the bottom row. For example, 1 -> 3 -> 5. The weight of the path is the sum of the entries.

Write a program that returns the weight of the maximum weight path.
*/

//Answer-

//Defining adjacency- ith element(from left) in kth row(from top) has below neighbours (ith and i+1th element in k+1th row)

//First approach:O(n^2): Bottom up elimination.

#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
  if(a>b) return a;
  return b;
}
int min(int a,int b){
  if(a>b) return b;
  return a;
}
void print(string log){
  cout<<log<<endl;
}
void print(string log,int n){
  cout<<log<<" : "<<n<<endl;
}
int solveForMax(vector<vector<int>> &arr){
    if(arr.size()==1) return arr[0][0];
    int n=arr.size();
    vector<int> temp=arr[n-1];
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i+1;j++){
          temp[j]=max(temp[j],temp[j+1])+arr[i][j];
        }
        temp.pop_back();
    }
    return temp[0];
}
int solveForMin(vector<vector<int>> &arr){ //The other variant.
    if(arr.size()==1) return arr[0][0];
    int n=arr.size();
    vector<int> temp=arr[n-1];
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i+1;j++){
          temp[j]=min(temp[j],temp[j+1])+arr[i][j];
        }
        temp.pop_back();
    }
    return temp[0];
}
int main(){
  vector<vector<int>> a={{1},{2,3},{1,5,1},{1,2,2,20}};
  cout<<"Maximum weight is Answer is: "<<solveForMax(a)<<"\n";
    cout<<"Minimum  weight is Answer is: "<<solveForMin(a)<<"\n";
}