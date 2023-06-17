#include <iostream>
#include <string>

using namespace std;

int linearSearch(int a[], int x, int s);
int binarySearch(int a[], int x, int s);
int binarySearchRecursion(int a[], int x, int l, int h);

int main()
{

  int arr[] = {0, 5, 10, 13, 15, 20, 50, 51, 75, 100};

  cout << "-------------\tLinear Search\t--------------------" << endl;
  cout << linearSearch(arr, 15, 10) << endl;
  cout << linearSearch(arr, 1, 10) << endl;

  cout << "-------------\tBinary Search\t--------------------" << endl;
  cout << binarySearch(arr, 5, 10) << endl;
  cout << linearSearch(arr, 3, 10) << endl;

  cout << "-------------\tRecursive Binary Search\t-------------" << endl;
  cout << binarySearchRecursion(arr, 75, 0, 9) << endl;
  cout << binarySearchRecursion(arr, 52, 0, 9) << endl;

  return 0;
}

int linearSearch(int a[], int x, int s){
  for(int i = 0; i < s; i++){
    if(a[i] == x){
      return i;
    }
  }
  return -1;
}
int binarySearch(int a[], int x, int s){
  int low = 0;
  int high = s - 1;

  while(high >= low) {
    int mid = (low + high) / 2;

    if(x == a[mid]) {
      return mid;
    }
    else if(x > a[mid]) {
      low = mid;
    }
    else {
      high = mid;
    }

    cout << mid << endl;
  }
  return -1;
}

int binarySearchRecursion(int a[], int x, int l, int h){

    int mid = (l+h)/2;

    if(h < l){
      return -1;
    }

    else if(x == a[mid]){
      return mid;
    }

    else if(x > a[mid]){
      return binarySearchRecursion(a, x, mid + 1, h);
    }

    else if(x < a[mid]){
      return binarySearchRecursion(a, x, l, mid - 1);
    }


}
