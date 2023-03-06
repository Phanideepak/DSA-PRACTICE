#include<bits/stdc++.h>

using namespace std;

class node {
    public:
    int data;
    node *next;

    node(int val){
       data = val;
       next = NULL;
    } 
};

// & address is used for write operations on variables.
void insertAtTail(node* &head, int data){
    node* dataNode = new node(data);
    if(head==NULL){
        head=dataNode;
        return;
    }
    node* iterateNode = head;

    while(iterateNode->next != NULL){
        iterateNode = iterateNode->next;
    }
    iterateNode->next = dataNode;
}

void insertAtStart(node * &head, int data){
    node* dataNode = new node(data);
    if(head==NULL){
        head = dataNode;
        return;
    }
    dataNode->next = head;
    head = dataNode;
}

void insertAtPosition(node* &head, int data, int p){
    if(p==1){
       insertAtStart(head,data);
       return;    
    }
    node* dataNode = new node(data);
    if(head==NULL){
        head = dataNode;
        return;
    }

    node* it = head;

    // traverse upto the node at position p-1.
    for(int i=1;i<p-1;i++){
        it = it->next;   
    }
    node* jt = it->next;
    it->next = dataNode;
    dataNode->next = jt;
}

void deleteAtStart(node* &head){
    node* p = head;
    head = head->next;
    delete p;    
}

void deleteAtPosition(node* &head, int position){
    if(position ==1){
        deleteAtStart(head);
        return;
    }
    node * currentNode = head;

    //traverse and land on element at position-1
    for(int i=1;i<=position-2;i++){
       currentNode = currentNode->next;
    }

    node* targetNode = currentNode->next;
    currentNode->next = targetNode->next;

    delete targetNode;
}

void reverseLinkedList(node* &head){
   node* prev = NULL;
   node* current = head;
   node* nextNode = NULL;

   while(current!=NULL){
      nextNode = current->next;
      current->next = prev;

      // set the pointers for next iteration.
      prev = current;
      current = nextNode;
   }

   //reset head pointer to prev.
   head = prev;
}

void reverseKNodesthList(node* &head, int k){
    int count = 0;
    node* current = head;
    node* prev = NULL;
    node* nextNode = NULL;

    while(current!=NULL&&count<k){
        nextNode = current->next;
        current->next = prev;

        // iterations.
        prev = current;
        current = nextNode;
        count++;
    }
    
    // after k iterations. 
    // linked list is split into reversed list of k nodes and residue linked list.
    // next Pointer acts as header for the residue linked list.
    // apply recursion on residue linked list.
    if(nextNode != NULL){
        reverseKNodesthList(nextNode,k);
        // appending first reverse list to answer reversed list.
        head->next = nextNode;
    }

    head = prev;

}

void printList(node* head){
    node* iterateNode = head;
    while(iterateNode != NULL){
        cout<<iterateNode->data<<" ";
        iterateNode = iterateNode->next;
    }cout<<endl;
}


int main(){
    node* head = NULL;
    insertAtTail(head,11);
    insertAtTail(head,22);
    printList(head);
    insertAtStart(head,33);
    insertAtStart(head,44);
    printList(head);
    insertAtPosition(head,55,1);
    insertAtPosition(head,66,3);
    printList(head);
    deleteAtPosition(head,1);
    printList(head);
    insertAtPosition(head,101,2);
    printList(head);
    insertAtPosition(head,105,2);
    printList(head);
    deleteAtPosition(head,2);
    printList(head);
    reverseLinkedList(head);
    printList(head);
    reverseKNodesthList(head,3);
    printList(head);        
}
