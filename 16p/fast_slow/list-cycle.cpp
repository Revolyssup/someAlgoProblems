#include<iostream>
#include<functional>
#include <linkedlist.hpp>   //This work on the premise that on my local system i have my own linked list implementation. RUN include.sh in ds-algo-atstl.
int main(){
    atstl::LinkedList<int> l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.insert(6);
    l1.reverse();
    l1.make_circular(2);
    l1.print();
}

