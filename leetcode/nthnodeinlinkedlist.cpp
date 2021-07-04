#include<bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int n0=1;
        ListNode* nextNode=head;
        while(nextNode!=NULL){
            n0++;
            nextNode=nextNode->next;
        }
        int i=n-n0+1;
        while(i!=1) {i--;nextNode=nextNode->next;}

       return head; 
    }
};

void insert(ListNode* l,int n){
    int* temp=new int(n);
    ListNode* nextNode=l;
    while(nextNode->next!=NULL){
        nextNode=nextNode->next;
    }    
    ListNode* bruh=new ListNode(n);
        nextNode->next=bruh;
}
void print(ListNode* l){
    ListNode* nextNode=l;
    std::cout<<"Printing linked list...\n";
    while(nextNode!=NULL){
        std::cout<<nextNode->val<<"->";
        nextNode=nextNode->next;
    }    
    std::cout<<std::endl;
}
int main(){
    ListNode l(5);
    insert(&l,6);
    insert(&l,7);
    insert(&l,10);
    insert(&l,111);
    insert(&l,12);
    print(&l);

    return 0;
}