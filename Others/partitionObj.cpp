//Given n objects. Give the number of ways they can be divided with one group having k elements;where k<=m

#include<bits/stdc++.h>

int partition(int n,int m){
    if(n<0 || m==0) return 0;
    if(n==0) return 1; //There is nothing to partition , 
    return partition(n,m-1)+partition(n-m,m);
}