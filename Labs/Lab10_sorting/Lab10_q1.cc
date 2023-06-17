#include <iostream>

using namespace std;

int main(){

  int a[] = {100, 0, 50, 10, 20, 13, 15, 5, 51, 75};

  cout << "-------------\tBefore Sorting\t--------------------" << endl;

    for(int i = 0; i < 10; i++){
      cout << a[i] << " ";
    }

    cout << endl;

  for(int i = 0; i < 9; i++){
    for(int j = i+1; j < 10; j++){
      if(a[i] < a[j]){

        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  cout << "-------------\tAfter Sorting\t--------------------" << endl;
  for(int i = 0; i < 10; i++){
    cout << a[i] << " ";
  }

  return 0;
}
