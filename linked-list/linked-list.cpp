#include<bits/stdc++.h>

using namespace std;

typedef struct Node{
   int data;
   Node* next;
}node;

node* insertAtEnd(node* head, int data){
    node* newNode = new Node;
    newNode->data = data;
    if(head==NULL){
        head = newNode;
        return head;
    }
    
    node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = newNode;
}

int main(){

}