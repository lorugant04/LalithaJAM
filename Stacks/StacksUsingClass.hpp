using namespace std;

class Stacks {

  public:
      struct Node {
        int data;
        Node* next;
      };
      Node* top = NULL;
      void push(int data) {
        if(top == NULL) {
          Node* newNode = new Node();
          newNode->data = data;
          newNode->next = NULL;
          top = newNode;
        }
        else {
          Node* nN = new Node();
          nN->data = data;
          nN->next = top;
          top = nN;
        }
      }
      void print() {
         Node* temp = top;
         while(temp != NULL) {
           cout << temp->data << endl;
           temp = temp->next;
         }
      }
      void pop() {
        Node* t = top;
        if(t->next != NULL) {
          t = t->next;
          top = t;
        }
      }
};


