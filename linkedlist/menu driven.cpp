/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

/*Node* Insert(Node* head){
    int data;
    cin>>data;
    Node* temp = head;
    while(data != -1){
        Node* newNode = new Node(data);
        if(head = NULL){
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
}*/
Node* InsertAtTail(Node* &head,int val){
 Node* n=new Node(val);
 if(head==NULL){
     head=n;
     return head;
 }  
 Node* temp=head;
 while(temp->next!=NULL){
     temp=temp->next;
 }
 temp->next=n;
 return head;
}


//Node* Delete(Node* head)

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
    cout<<endl;

}
int main(){

    int val;
    Node* head = NULL;
    bool f = true;
    while(f){
        cout<<"Choose a function: "<<endl;
        cout<<"1 - Insert in Linked List."<<endl;
       // cout<<"2 - Delete From Linked List."<<endl;
        cout<<"3 - Print the Linked List."<<endl;
        cout<<"-1 - Terminate."<<endl;
        cin>>val;
        int x;
        if(val == 1){
            cout<<"insert element";
            cin>>x;
            
             InsertAtTail(head,x);
        }
       // else if(val == 2){
       //     head = Delete(head);
      //  }
        else if(val == 3){
            print(head);
        }
        else if(val == -1){
            f = false;
            break;
        }
    }
    return 0;
}
