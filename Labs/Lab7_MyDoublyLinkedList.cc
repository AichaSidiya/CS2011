#include <iostream>
#include <string>

using namespace std;

class Node{
public:
  string data;
  Node* next;
  Node* previous;

  Node(){
    next = NULL;
    previous = NULL;
  }

};

class DLList{
  Node* dummy;
  int n;

public:

  DLList(){
    dummy = new Node();
    dummy->next = dummy;
    dummy->previous = dummy;
    n = 0;
  }

  int size(){
    return n;
  }

  Node* getNode(int i){
    Node* m = dummy;
    if(i < (n/2)){
      // m = dummy->next;
      for(int j = 0; j <= i; j++){
        m = m->next;
      }
    }
    else{
      // m = dummy->previous;
      for(int j = n-1; j >= i; j--){
        m = m->previous;
      }
    }

    return m;
  }

  string get(int i){
    Node* m = getNode(i);
    return m->data;
  }

  void set(int i, string s){
    Node* m = getNode(i);
    m->data = s;
  }

  void addBefore(Node* w, string s){
    Node* u = new Node();
    u->data = s;
    u->next = w;
    u->previous = w->previous;
    u->next->previous = u;
    u->previous->next = u;
    n++;
  }

  void add(int i, string s){
    Node* m = getNode(i);
    addBefore(m, s);
  }

  void removeNode(Node* w){
    w->previous->next = w->next;
    w->next->previous = w->previous;
  }

  void remove(int i){
    Node* m = getNode(i);
    cout << m->data << endl;
    removeNode(m);
    delete(m);
    n--;
  }

  void addFirst(string x){
    add(0, x);
  }

  void addLast(string x){
    add(n, x);
  }

  void removeFirst(){
    remove(0);
  }

  void removeLast(){
    remove(n-1);
  }

};

int main(){
  DLList dl;
  //
  // dl.addFirst("a");
  // dl.addFirst("b");
  // dl.addFirst("c");
  dl.addLast("d");
  dl.addLast("e");

  for(int i = 0; i < dl.size(); i++){
    cout << dl.get(i) << " ";
  }

  // dl.removeLast();
  // dl.removeLast();
  // dl.removeLast();
  // dl.removeFirst();
  // dl.removeFirst();
  // dl.removeFirst();
  // dl.removeFirst();
  // // dl.removeFirst();




  return 0;
}
