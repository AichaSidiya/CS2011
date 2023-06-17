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

    while(!infile.eof()){
      getline(infile,line);
      stack.push(line);
    }

    while(!stack.empty()){
      cout << stack.top() << endl;
        stack.pop();
    }

      infile.close();

    return 0;
}
