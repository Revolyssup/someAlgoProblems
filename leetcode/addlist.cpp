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
                if(temp>9){ //we have a carry
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
            
            if(carry){
                itrans->val=carry;
                itrans->next=NULL;           
            }else{
                    itrans=ans;
                   while(itrans->next->next!=NULL){
                       ListNode* temp=itrans;
                        itrans=itrans->next; 
                        delete temp;
                        }
                     itrans->next=NULL;
            }
            return ans;
    }
};


ListNode* fill(int n){
    ListNode* head=new ListNode();
    ListNode* itr=head;
    for(int i=0;i<n-1;i++){
        std::cin>>itr->val;
        itr->next=new ListNode();
        itr=itr->next;
    }
    std::cin>>itr->val; //last time. This time no new node.s  
    return head;
}

void del(ListNode* head){
    ListNode* itr=head;
    ListNode* itr2=itr;
    while(itr){
        itr=itr->next;
        delete itr2;
        itr2=itr;
    }
}
int main(){
    Solution sol;
    int n;
    std::cout<<"Enter number of elements of first list .\n";
    std::cin>>n;
    std::cout<<"Enter elements of first list(space seperated) from head to tail.\n";
    ListNode* l1=fill(n);
    std::cout<<"Enter number of elements of second list .\n";
     std::cin>>n;
    std::cout<<"Enter elements of second list(space seperated) from head to tail.\n";
    ListNode* l2=fill(n);
    ListNode* bruh=sol.addTwoNumbers(l1,l2);
    ListNode* temp=bruh;
    std::cout<<"Printing list: ";
    while(temp){
        std::cout<<temp->val;
        temp=temp->next;
    }
    std::cout<<std::endl;

    del(l1);del(l2);
    // delete l1;
    // delete l2;
}