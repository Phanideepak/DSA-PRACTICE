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

    public static void main(String[] args){
        LinkedList list = new LinkedList();
        list.head = list.insertAtEnd(list.head,11);
        list.head = list.insertAtEnd(list.head,22);
        list.head = list.insertAtStart(list.head,33);
        list.print(list.head);
    }
}