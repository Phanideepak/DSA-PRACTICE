#include<bits/stdc++.h>

using namespace std;


class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
         data = val;
         next=prev=NULL;
    }
};

void insertAtStart(node* &head, int data){
    node * dataNode = new node(data);
    if(head==NULL){
        head = dataNode;
        return;
    }
    dataNode->next = head;
    head->prev  = dataNode;

    head = dataNode;
}

void insertAtTail(node* &head, int data){
   node* dataNode = new node(data);
   if(head == NULL){
      head = dataNode;
      return;
   }
   node* p = head;
   while(p->next!=NULL) p=p->next;
   p->next = dataNode;
   dataNode->prev = p;
}

void insertAtPosition(node* &head, int data, int position){
    node* dataNode = new node(data);
    if(position==1){
        insertAtStart(head,data);
    }
    node* p = head;
    // travel till you reach ith position.
    for(int i=1;i<position-1;i++){
       p = p->next; 
    }
    node* q = p->next;

    p->next = dataNode;
    dataNode->prev = p;

    dataNode->next = q;
    q->prev = dataNode;
}

void deleteAtStart(node* &head){
    node* p = head;
    head=head->next;
    delete p;
}

void deleteAtPosition(node* &head, int position){
    if(position==1){
        deleteAtStart(head);
    }

    node* p = head;
    // traverse and reach position-1 node;
    for(int i=1;i<position-1;i++){
        p=p->next;
    }
    node* q=p->next;
    p->next = q->next;
    q->next->prev = p;

    delete q;
}

void printList(node* head){
    node* p = head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }cout<<endl;
}

void printReverse(node* head){
    node* p = head;
    while(p->next!=NULL) p = p->next;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->prev;
    }cout<<endl; 
}

int main(){
   node* head = NULL;
   insertAtTail(head,11);
   insertAtTail(head,34);
   insertAtTail(head,55);
   printList(head);
   printReverse(head);
   insertAtTail(head,59);
   printList(head);
   insertAtStart(head,31);
   printList(head);    
   insertAtPosition(head,52,4);
   printList(head); 
   deleteAtStart(head);
   printList(head);
   deleteAtPosition(head,2);
   printList(head);
}