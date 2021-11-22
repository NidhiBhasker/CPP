# include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* next;
node(int val){
    data=val;
    next=NULL;
}
};
node*insertattail(node* head,int data){
    node*temp=head;
    node*new1= new node(data);
    if(head==NULL){
        head=new1;
        head->next=NULL;
        return head;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new1;
    return head;
    

}

node* midpoint(node* head){
    node*fast=head;
    node*slow=head;
    if(head==NULL){
        return head;
    }
    while(fast != NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

    }
    cout<<"midpoint is"<<slow->data;
    return slow;


}
int main(){
       node n1(1);
    node*head=&n1;
    node n2(2);
    n1.next=&n2;
    node n3(3);
     n2.next=&n3;
     node n4(4);
      n3.next=&n4;
      node n5(5);
       n4.next=&n5;
    midpoint(head);
    return 0;
}