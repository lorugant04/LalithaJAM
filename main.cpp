#include <iostream>
#include "SingleLinkedListUsingClass.hpp"

/**
* Custome structure to define a node in the linked list:
* Head -> Node 1 -> .... -> Node N -> Tail
**/
//using namespace std;
struct Node {
   int data;
   Node* next;
};

void print(Node* h) {
  Node* tp = h;
  while(tp != NULL) {
    cout << tp->data << endl;
    tp = tp->next;
  }
}

Node* insert(int data, Node* head) {
  if (head == NULL) {
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    head = temp;
  } else {
    Node* t = head;
    while(t->next != NULL) {
       t = t->next;
    }
    
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    t->next = newNode;
  }
  
  return head;
}


int main() {
  /**
  Node* head = NULL;
  head = insert(1, head);
  head = insert(2, head);
  head = insert(3, head);
  print(head);
  **/

  SingleLinkedList *sll = new SingleLinkedList();
  sll->insert(1);
  sll->insert(2);
  sll->insert(3);
  sll->print();

  return 0;
}