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
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        
    }
    cout<<"NULL";

}
node* merge(node* &head1,node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* dummynode=new node(-1);
    node* p3=dummynode;

    while(p1!=NULL && p2!=NULL){
        if(p1->next<p2->next){
            p3->next=p1;
            p1=p1->next;
        }
        else if(p1->next>p2->next){
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
        
    }
    while(p1!=NULL){
            p3->next=p1;
            p1=p1->next;
            p3=p3->next;
        }
        while(p2!=NULL){
            p3->next=p2;
            p2=p2->next;
            p3=p3->next;
        }
        return dummynode->next;
    

}
void InsertAtTail(node* &head,int val){
 node* n=new node(val);
 if(head==NULL){
     head=n;
 }  
 node* temp=head;
 while(temp->next!=NULL){
     temp=temp->next;
 }
 temp->next=n;

}
int main(){
    node* head1=NULL;
    node* head2=NULL;
    int arr1[]={1,4,5,7};
    int arr2[]={2,3,6};
    for(int i=0;i<4;i++){
        InsertAtTail(head1,arr1[i]);
    }
     for(int i=0;i<3;i++){
        InsertAtTail(head2,arr2[i]);
    }
    print(head1);
    print(head2);
    node* newhead=merge(head1,head2);
    print(newhead);

    return 0;

}