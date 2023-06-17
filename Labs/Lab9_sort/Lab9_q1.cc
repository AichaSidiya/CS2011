#include <iostream>
#include <string>

using namespace std;

void selectionSort(int a[], int s);

int main()
{

  int arr[] = {0, 15, 1, 13, 5, 20, 70, 51, 75, 100};

  selectionSort(arr, 10);

  for(int i = 0; i < 10; i++){
    cout << arr[i] << " ";
  }

  return 0;
}

void selectionSort(int a[], int s){
  for(int i = 0; i < s; i++){
    int maxIndex = i;
    for(int j = i+1; j < s; j++){
      if(a[j] > a[maxIndex]){
        maxIndex = j;
      }
    }

    int temp = a[i];
    a[i] = a[maxIndex];
    a[maxIndex] = temp;

  }
}
