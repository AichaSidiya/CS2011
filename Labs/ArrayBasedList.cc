#include <iostream>
#include <string>

using namespace std;

class ArrayBasedList{
private:
  int s;
  char *a;
  int len;

public:
  ArrayBasedList(){
    len = 10;
    a = new char[len];
    s = 0;
  }
  ~ArrayBasedList(){
    delete [] a;
  }
  int size(){
    return s;
  }
  char get(int i){
    return a[i];
  }

  void set(int i, char newA){
    a[i] = newA;
  }
  void add(int i, char newA){
    if(s == len) {
        resize();
    }
    for(int j = s-1; j >= i; j--){
        a[j+1] = a[j];
     }
     a[i] = newA;
     s++;

  }
  char mremove(int i){

    if(s == (len/3)){
      resize();
    }
    char oldA = a[i];
    for(int j = i; j <= s-2; j++){
      a[j] = a[j+1];
    }
    s--;

    return oldA;
  }

  void resize(){
    char* b;
    b = new char[s * 2];
    for(int i = 0; i < s; i++){
      b[i] = a[i];
    }
    delete [] a;
    a = b;

    len = s*2;
  }
  void push(char newA){
    add(s, newA);
  }

  char pop(){
    return mremove(s-1);
  }
};

int main()
{
  ArrayBasedList myArray;
  string s;

  cout << "Enter a string: ";
  cin >> s;
  cout << endl;

  for(int i = 0; i < s.length(); i++){
    myArray.push(s[i]);
  }

  for(int i = 0; i < s.length(); i++){
    cout << myArray.pop();
  }


  return 0;
}
