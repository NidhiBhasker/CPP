#include<bits/stdc++.h>
using namespace std;
class node{
 public:
 int data;
 node *next;
 node(int val){
     data=val;
     next=NULL;
 }

};
class Pair{
    public:
    node* head;
    node* tail;
};
Pair reverseRec2(node* &head){         //this method will make complexity O(n) since u dont need to find
    if(head==NULL||head->next==NULL){  // tail every singe time rather multiple parameters can be returned
        Pair ans;                      // by a function using class object
        ans.head=head;
        ans.tail=tail;
        return ans;
    }
    Pair newnode=reverseRec2(head->next);
    newnode.tail->next=head;
    head->next=NULL;
    Pair ans;
    ans.head=newnode;
    ans.tail=head;
    return ans;

}
node* typeconversion(node* &head){ //for type conversion from pair to node type 
    return reverseRec2(head).head;

}
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        
    }
    cout<<"NULL";

}

node* reverse(node* &head){//iterative approach 
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;

    }
    return prevptr;
}
node* reverseRECURSIVE(node* &head){//recursive approach O(n2)
    if(head==NULL||head->next==NULL){
        return head;

    }
    node* newnode=reverseRECURSIVE(head->next);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=head;
    head->next=NULL;
    return newnode;

}
node* InsertAtTail(node* &head,int val){
 node* n=new node(val);
 if(head==NULL){
     head=n;
     return head;
 }  
 node* temp=head;
 while(temp->next!=NULL){
     temp=temp->next;
 }
 temp->next=n;
 return head;
}
 int main(){
     node* head=NULL;
     InsertAtTail(head,1);
      InsertAtTail(head,2);
       InsertAtTail(head,3);
        InsertAtTail(head,4);
        print(head);
        cout<<endl;
        node* newhead= reverseRECURSIVE(head);
        print(newhead);
     return 0;
 }