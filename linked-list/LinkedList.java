import java.util.*;
import java.io.*;


class Node{
    int data;
    Node next;
    Node(int x){
        this.data = x;
        this.next = null;
    }
}

class LinkedList{
    Node head = null;
    LinkedList(){
        head = null;
    }

    Node insertAtEnd(Node head, int data){
         Node newNode = new Node(data);
         if(head ==null){
            head = newNode;
            
         } else {
            Node temp = head;
            while(temp.next !=null){
               temp = temp.next;

            }
            temp.next = newNode;
         }
         return head;
    }

    Node insertAtStart(Node head, int data){
        Node newNode = new Node(data);
        Node p = head;
        newNode.next = p;
        head = newNode;
        return head;
    }

    void print(Node head){
        Node p = head;
        while(p!=null){
            System.out.print(p.data+" ");
            p = p.next;
        }
        System.out.println();
    }

    int search(Node head, int key){
        Node p = head;
        int pos = 0;
        while(p!=null){
            pos = pos+1;
            if(p.data == key) break;
            p = p.next;
        }
        return pos;
    }

    Node deleteAtPosition(Node head, int pos){
        Node p = head;
        if(pos == 1){
            head = head.next;
            return head;
        }
        for(int i=1;i<pos-1;i++) p = p.next;
        Node q = p.next;
        p.next = q.next;
        return head;
    }

    public static void main(String[] args){
        LinkedList list = new LinkedList();
        list.head = list.insertAtEnd(list.head,11);
        list.head = list.insertAtEnd(list.head,22);
        list.head = list.insertAtStart(list.head,33);
        list.head = list.insertAtStart(list.head,34);
        list.head = list.insertAtStart(list.head,35);
        list.head = list.insertAtStart(list.head,36);
        list.head = list.insertAtStart(list.head,33);
        list.print(list.head);
        System.out.println(list.search(list.head, 22));
        list.head = list.deleteAtPosition(list.head,1);
        list.print(list.head);
        list.head = list.deleteAtPosition(list.head,4);
        list.print(list.head);
    }
}