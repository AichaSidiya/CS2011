#include <iostream>
#include <string>

using namespace std;

class ArrayBasedQueue{
private:
  int s;
  string *a;
  int len;
  int j;

public:
  ArrayBasedQueue(){
    len = 10;
    a = new string[len];
    s = 0;
    j = 0;
  }
  ~ArrayBasedQueue(){
    delete [] a;
  }

  void add(char newA){
    if(s == len) {
        resize();
    }
     a[(j+s) % len] = newA;
     s++;

  }
  string mremove(){
    string oldA = a[j];

    if(s == (len/3)){
      resize();
    }

    j = (j+1) % len;
    s--;

    return oldA;
  }

  void resize(){
    string* b;
    b = new string[s * 2];
    for(int i = 0; i < s; i++){
      b[i] = a[(j+i) % len];
    }

    delete [] a;
    a = b;
    j = 0;
    len = s*2;
  }

  void rotate(int r){
    string* b;
    b = new string[len];

    for(int i = 0; i < s; i++){
      b[i] = a[(i+r) % s];
    }

    delete [] a;
    a = b;
  }
};

int main()
{
  ArrayBasedQueue myArray;
  string s;
  int rot;

  cout << "Enter a string: ";
  cin >> s;
  cout << endl;

  for(int i = 0; i < s.length(); i++){
    myArray.add(s[i]);
  }

  cout << "Enter index where you want to rotate: ";
  cin >> rot;
  cout << endl;

  myArray.rotate(rot);

  for(int i = 0; i < s.length(); i++){
    cout << myArray.mremove();
  }

  return 0;
}
