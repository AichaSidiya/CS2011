#include <iostream>
#include <string>
#include <stack>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    string line;
    infile.open("1-200.txt");
    stack<string> stack;
    int size = 50;
    int counter = 1;

    while(!infile.eof()){
      for(int i = 0; i < size; i++){
        getline(infile,line);
        stack.push(line);
      }
      cout << "This is the 50 number :" << counter << endl;
      while(!stack.empty()){
        cout << stack.top() << endl;
          stack.pop();
      }
      counter++;
    }
      infile.close();

    return 0;
}
