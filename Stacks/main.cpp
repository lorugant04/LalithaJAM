#include <iostream>
#include "StacksUsingClass.hpp"

using namespace std;

struct Node {
  int data;
  Node* next;
};

void print(Node* top) {
  Node* t = top;
  while(t != NULL) {
    cout << t->data << endl;
    t = t->next;
  }
}

Node* insert(int data, Node* top)
{
  if(top == NULL) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    top = newNode;
  }
  else {
    Node* t = top;
    Node* nN = new Node();
    nN->data = data;
    nN->next = t;
    top = nN;
  }
  return top;
}

int main(int argc,char* argv[]) {

/*  Node* top = NULL;
  top = insert(1, top);
  top = insert(2, top);
  top = insert(3, top);
  top = insert(4, top);
  print(top);
*/
Stacks *s = new Stacks();
s->push(10);
s->push(20);
s->push(30);
s->push(40);
cout << "before" << endl;
s->print();
s->pop();
cout << "after" << endl;
s->print();
  return 0;
}