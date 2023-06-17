#include <iostream>
#include <string>

using namespace std;

void alphabeticalOrder(string a[], int s);

int main()
{

  string arr[] = {"Dr. Fidaa", "Habiba", "Walla", "Aicha", "Hanin", "Sara", "Joud", "Lamar"};

  alphabeticalOrder(arr, 8);

  for(int i = 0; i < 8; i++){
    cout << arr[i] << endl;
  }

  return 0;
}

void alphabeticalOrder(string a[], int s){
  for(int i = 0; i < s; i++){
    int minIndex = i;
    for(int j = i+1; j < s; j++){
      if(a[minIndex].compare(a[j]) > 0){
        minIndex = j;
      }
    }

    string temp = a[i];
    a[i] = a[minIndex];
    a[minIndex] = temp;

  }
}
