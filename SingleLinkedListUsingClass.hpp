#include <iostream>

using namespace std;

class SingleLinkedList {
  
  public: 
  struct Node {
    int data;
    Node* next;
  };  

  struct Node* head = NULL;
  
  void print()
  {
    Node* temp = head;
    while(temp != NULL)
    {
      cout << temp->data << endl;
      temp = temp->next;
    }
  }

  void insert (int data) {
    if (head == NULL) {
      Node* temp = new Node();
      temp->data = data;
      temp->next = NULL;
      head = temp;
    } else {
      Node* t = head;
      Node* nN = new Node();
      nN->data = data;

      // Replacing head
      nN->next = t;
      head = nN;
    }
  }
};