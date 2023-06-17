#include <iostream>
#include <string>

using namespace std;

class Node{
public:
  string data;
  Node* next;

  Node(){
    next = NULL;
  }

};

class LinkedList{
  Node* head;
  Node* tail;
  int n;

public:

  LinkedList(){
    head = NULL;
    tail = NULL;
    n = 0;
  }
  void push(string x){
    Node* a = new Node();
    a->data = x;
    a->next = head;
    head = a;
    if(n == 0){
      tail = a;
    }
    n++;
  }

  void pop(){
    if(n == 0){
      cout << " ";
    }
    else
    {
      Node* temp = head;
    string tempData = temp->data;
    cout << tempData << endl;
    head = head->next;
    delete(temp);
    n--;

    if(n == 0){
      tail = NULL;
    }
  }
  }

  void add(string x){
    Node* a = new Node();
    a->data = x;
    if(tail == NULL){
      tail = head = a;
    }
    else{
      tail->next = a;
      tail = a;
    }
    
    n++;
  }

  void remove(){
    if(n == 0){
      cout << " ";
    }
    else{
      Node* temp = head;
    string tempData = temp->data;
    cout << tempData << endl;
    head = head->next;
    delete(temp);
    n--;

    if(n == 0){
      tail = NULL;
    }
  }
}

};

int main(){
  LinkedList l;

  cout << "************************* Linked List as Stack ***********************" << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << endl;

  l.push("Aicha");
  l.push("Reem");
  l.push("Hajer");
  l.push("Habiba");

  l.pop();
  l.pop();
  l.pop();
  l.pop();
  cout << endl;

  cout << "************************* Linked List as Queue ***********************" << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << endl;

  l.add("Aicha");
  l.add("Reem");
  l.add("Hajer");
  l.add("Habiba");

  l.remove();
  l.remove();
  l.remove();
  l.remove();
  l.remove();

  return 0;
}
