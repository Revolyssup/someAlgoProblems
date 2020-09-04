/*A linked list is given such that each node contains an additional random pointer which could point to any node in the list or null.

Return a deep copy of the list.

The Linked List is represented in the input/output as a list of n nodes. Each node is represented as a pair of [val, random_index] where:

val: an integer representing Node.val
random_index: the index of the node (range from 0 to n-1) where random pointer points to, or null if it does not point to any node.*/
#include<bits/stdc++.h>
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

void insertnew(Node* infront,int val){
    Node* toinsert=new Node(val);
    toinsert->next=infront->next;
    toinsert->random=toinsert;
    infront->next=toinsert;
}
    void insert(Node* infront){
        Node* toinsert=new Node(infront->val);
        toinsert->next=infront->next;
        infront->next=toinsert;
    }
    Node* copyRandomList(Node* head) {
        //Inserting copied list in between original list
            Node* temp=head;
            while(temp!=NULL){
                insert(temp);
                temp=temp->next;
                temp=temp->next;
            }
        //Setting random pointers
            temp=head;
            while(temp!=NULL){
                if((temp->random)==NULL) temp->next->random=NULL;
                else temp->next->random=temp->random->next;
                temp=temp->next;
                temp=temp->next;
            }
        
        //Setting next pointers 
            temp=head->next;
            while((temp->next)!=NULL){
                temp->next=temp->next->next;
                temp=temp->next;
            }
            temp=head->next;
            std::cout<<"Returning node pointing to "<<temp->val<<"\n";
            return temp;
        }

void printList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        std::cout<<temp<<"\t"<<temp->val<<"\n";
        temp=temp->next;
    }
}
int main(){
    Node* head=new Node(5);
    insertnew(head,20);
    insertnew(head,50);
    insertnew(head,30);
    
    auto start=std::chrono::high_resolution_clock::now();
    Node* newhead=copyRandomList(head);
    auto end=std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end- start); 
    printList(head);
    std::cout<<"............"<<duration.count()<<".................\n";
    printList(newhead);
}