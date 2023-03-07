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

void insertKEndNodesAtBegining(node* &head, int k){
   //reach upto n-r position.
   node* countPtr = head;
   int n=0;
   while(countPtr!=NULL){
      n++;
      countPtr = countPtr->next;
   }

   node* p = head; 
   for(int i=1;i<n-k;i++){
      p=p->next;
   }
   node* newHead = p->next;
   p->next = NULL;

   node* r = newHead;

   while(r->next!=NULL) r=r->next;

   r->next=head;

   head = newHead;
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

bool detectCycle(node* head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

void buildCycle(node* &head){
    node* p = head;
    for(int i=1;i<=2;i++){
        p=p->next;
    }
    node* q= head;

    while(q->next!=NULL) q=q->next;

    q->next = p;

}

int length(node* head){
    int count=0;
    node* p=head;

    while(p!=NULL){
        count=count+1;
        p=p->next;
    }

    return count;
}

void intersect(node* &head1, node* &head2, int pos){
    node* p= head1;
    for(int i=1;i<pos;i++){
        p=p->next;
    }
    node* q = head2;
    while(q->next!=NULL){
        q=q->next;
    }
    q->next=p;
}

int intersection(node* head1, node* head2){
    int l1 = length(head1);
    int l2 = length(head2);
    node* p;
    node* q;

    int d=abs(l1-l2);

    if(l1>l2){
      p=head1;
      q=head2;        
    } else{
      p=head2;
      q=head1;
    }

    while(d--){
        p=p->next;
    }

    while(p!=NULL&&q!=NULL){
        if(p==q){
            return p->data;
        }
        p=p->next;
        q=q->next;
    }
    return -1;
}

void removeCycle(node* &head){
    node* slow  = head;
    node* fast = head;
    do{
       slow = slow->next;
       fast = fast->next->next;
    } while(fast!=slow);
    
    fast = head; // resetting fast pointer to the head of linked list.

    // iterate the loop, till next node of fast pointer and second pointer are same.
    // This next node will be start of the cycle.
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }

    // After above iterations, we will reach the point before cycle node.
    slow->next = NULL;
}

void printList(node* head){
    node* iterateNode = head;
    while(iterateNode != NULL){
        cout<<iterateNode->data<<" ";
        iterateNode = iterateNode->next;
    }cout<<endl;
}

void performIntersectionTestCase(){
    node* head1=NULL;
    node* head2=NULL;
    for(int i=101;i<=105;i++){
        insertAtTail(head1,i);
    }
    for(int i=10;i<=13;i++){
        insertAtTail(head2,i);
    }



    intersect(head1,head2,3);

    cout<<"intersection data: "<<intersection(head1,head2)<<endl;
}

node* mergeLists(node* head1, node* head2){
    node* p = head1;
    node* q = head2;

    node* answer = NULL;

    while(p!=NULL && q!=NULL){
        if(p->data>q->data){
           insertAtTail(answer, q->data);
           q = q->next;
        } else {
           insertAtTail(answer, p->data);
           p=p->next;
        }
    }
 

    while(p!=NULL){
        insertAtTail(answer,p->data);
        p = p->next;
    }
   

    while(q!=NULL){
        insertAtTail(answer, q->data);
        q = q->next;
    }

    return answer;
}

void performMergeSortScenario(){
    int n;
    cin >> n;
    node* head1 = NULL;
    node* head2 = NULL;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        insertAtTail(head1,x);
    } 

    int m;
    cin>>m;
    
    for(int i=1;i<=m;i++){
        int x;
        cin>>x;
        insertAtTail(head2,x);
    }
    
    node* resultantHead = mergeLists(head1,head2);

    printList(resultantHead);
    
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
    buildCycle(head);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    printList(head);
    insertKEndNodesAtBegining(head, 3);
    printList(head);
    insertKEndNodesAtBegining(head,4);
    printList(head);

    performIntersectionTestCase();

    performMergeSortScenario();

}
