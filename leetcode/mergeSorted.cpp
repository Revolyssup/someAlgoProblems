// Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists.
  //Definition for singly-linked list.
 struct ListNode {
     int val;
    ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
 class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* l1=a;
        ListNode* l2=b;
        ListNode* temp;
        while(l1!=nullptr && l2!=nullptr){
          if(l1->val<l2->val){
              temp=l1;
              l1=l1->next;
              temp->next=l2;
          }
          else{
            temp=l2;
            l2=l2->next;
            temp->next=l1;
          }
        }

        if(a->val<b->val) return a;
        else return b;
    }
};