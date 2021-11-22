#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data =val;
        next =NULL;
    }
};
void print(node*head){
    node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
node* insert(node* head,int data,int indx){
node* temp=head;
node* new1= new node(data);
int count=0;

if(head==NULL)
{
    head= new1;
    head->next=NULL;
    return head;
    
}

while (count<indx){
    temp=temp->next;
    count++;
}
new1->next=temp->next;
temp->next=new1;
return head;

}

int main(){
     node n1(1);
    node*head=&n1;
    node n2(2);
    n1.next=&n2;
    insert(head,3,1);
    print(head);
    return 0;
}
