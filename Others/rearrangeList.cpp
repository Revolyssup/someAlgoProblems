/*Take an input N,the size of the list.
Take N inputs and store in that list.
Rearrange the list such that all even numbers are after odd numbers.

Print the list*/

#include<iostream>
#include<vector>
//To use my own data structures
#include "/home/ashish/dev/ds-algo-atstl/atstllib/atstl.hpp"

void reArrange(atstl::LinkedList<int> &a){
    atstl::node<int>* temp=a.head.next;
     atstl::node<int>* itr=a.head.next;
    int tempval;
    while(itr!=NULL){
        if(temp->data%2) temp=temp->next;
        else if(itr->data%2) {
            atstl::utils::swap(&temp->data,&itr->data);
            temp=temp->next;
        }
        itr=itr->next;
    }
}

int main(){
    std::vector<int> vec={1,2,3,1,2,2,4,5,6,6};
    atstl::LinkedList<int> a(vec);
    std::cout<<"Before \n";
    a.print();
    reArrange(a);
    std::cout<<"\n  After \n";
    a.print();
}