#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string name;

    cout << "Please enter your name: ";
    cin >> name;
    cout << endl;

    stack<char> stack;

    for(int i = 0; i < name.length(); i++){
      stack.push(name[i]);
    }

    while(!stack.empty()){
      cout << stack.top();
        stack.pop();
    }
    return 0;
}
