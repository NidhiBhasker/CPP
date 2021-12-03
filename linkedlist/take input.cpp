#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int val){
        data=val;
        next = NULL;
    }
};

Node* takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            
        }
        else{
            Node* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin>>data;
    }
    return head;
}

void Print(Node* head){
    while(head != NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
    cout<<endl;
}

int main(){


    Node* head;
    
     head=  takeInput();
      Print(head);
    return 0;
}