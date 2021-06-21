#include <iostream>

using namespace std;

class DoubleLinkedList {
  public:
   struct Node {
     Node* prev;
     int data;
     Node* next;
   };

   struct Node* head = NULL;
  
  void print() {
    Node* t = head;
    cout << "from front to back " << endl;
    while (t->next != NULL) {
      cout << t->data << endl;
      t = t->next;
    }
    cout << t->data << endl;
    cout << "from back to front " << endl;
    while(t->prev != NULL) {
      cout << t->data << endl;
      t = t->prev;
    }
    cout << t->data << endl;
  }

   void insert(int data) {
     if (head == NULL) {
        Node* newNode = new Node();
        newNode->prev = NULL;
        newNode->data = data;
        newNode->next = NULL;
        head = newNode;

     } else {
       Node* temp = head;
       while(temp->next != NULL) {
         temp = temp->next; 
      }
        
        Node* nN = new Node();
        nN->prev = temp;
        nN->data = data;
        nN->next = NULL;
        temp->next = nN;
     }
   }

};
