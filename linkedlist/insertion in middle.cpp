#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

node* Insert(int d, int k, node* head)
{   
    if(head==NULL){
        return head;
    }
    node* newNode = new node(k);
    node* temp = head;
    for(int i=0;i<d-2;i++){
        temp = temp->next;
    }
    newNode->next=temp->next;
    temp->next = newNode;
    return head;

}

void print(node* head){
    node* temp = head;
    while(temp!=0){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int main(){
    node* head = NULL;
    node* n1 = new node(1);
    node* n2 = new node(2);
    node* n3 = new node(3);
    node* n4 = new node(4);
    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;
    print(head);
    int d,k;
    cout<<"Enter the position and value you want to enter mf !: "<<endl;
    cin>>d>>k;
    head = Insert(d,k,head);
    print(head);
    return 0;
}