#include <iostream>

using namespace std;

int main(){

  int a[] = {0, 5, 10, 13, 15, 20, 50, 51, 75, 100};

  cout << "-------------\tBefore Sorting\t--------------------" << endl;

    for(int i = 0; i < 10; i++){
      cout << a[i] << " ";
    }

    cout << endl;

bool swap = false;
for(int i = 0; i < 9; i++){
  for(int j = i+1; j < 10; j++){

    if(a[i] > a[j]){

      int temp = a[i];
      a[i] = a[j];
      a[j] = temp;

      swap = true;
    }
  }
    if(swap == false){
      cout << "Array is already sorted." << endl;
      break;
    }
  }

  cout << "-------------\tAfter Sorting\t--------------------" << endl;
  for(int i = 0; i < 10; i++){
    cout << a[i] << " ";
  }

  return 0;
}
