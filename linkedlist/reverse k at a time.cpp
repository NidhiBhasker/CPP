#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
        
    }
    cout<<endl;

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
node* reversek(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next= prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;

    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);

    }
    return prevptr;
}
int main(){
    node* head=NULL;

    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,6);
    print(head);
    int k=2;
    node* newhead=reversek(head,k);
    print(newhead);  

    return 0;

}