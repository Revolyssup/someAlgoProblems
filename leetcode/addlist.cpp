#include<bits/stdc++.h>

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
   };
class Solution {
public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* itr1=l1;
            ListNode* itr2=l2;
            ListNode* ans=new ListNode();
            ListNode* itrans=ans;
            int carry=0;
            int temp;
            while(itr1!=NULL && itr2!=NULL){
                temp=(itr1->val)+(itr2->val)+carry;
                if(temp!=(temp%10)){ //we have a carry
                    carry=1;
                    temp=(temp%10);
                }else{
                    carry=0;
                }

                itrans->val=temp;
                itrans->next=new ListNode();
                itrans=itrans->next;
                itr1=itr1->next;
                itr2=itr2->next;
            }
            while(itr1!=NULL){
                temp=(itr1->val)+carry;
                if(temp!=(temp%10)){ //we have a carry
                    carry=1;
                    temp=(temp%10);
                }else{
                    carry=0;
                }

                itrans->val=temp;
                itrans->next=new ListNode();
                itrans=itrans->next;
                itr1=itr1->next;
            }

            while(itr2!=NULL){
                temp=(itr2->val)+carry;
                if(temp!=(temp%10)){ //we have a carry
                    carry=1;
                    temp=(temp%10);
                }else{
                    carry=0;
                }

                itrans->val=temp;
                itrans->next=new ListNode();
                itrans=itrans->next;
                itr2=itr2->next;
            }
            
            itrans=ans;
            while(itrans->next->next!=NULL) itrans=itrans->next; //reach the second last node
            itrans->next=NULL;
            return ans;
    }
};

int main(){
    ListNode* l3=new ListNode(9);
    ListNode* l2=new ListNode(4,l3);
    ListNode* l1=new ListNode(5,l2);


    ListNode* k3=new ListNode(6);
    ListNode* k2=new ListNode(5,k3);



    Solution sol;
    ListNode* bruh=sol.addTwoNumbers(l1,k2);
    ListNode* temp=bruh;
    std::cout<<"Sum is: ";
    while(temp){
        std::cout<<temp->val;
        temp=temp->next;
    }
    std::cout<<std::endl;

    delete l1;
    delete l2;
    delete l3;
    // delete k1;
    delete k2;
    delete k3;
}