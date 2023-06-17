#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    stack<char> stck;
    int len;
    char c;
    queue<char> q;

    cout << "Enter the length of your stack: ";
    cin >> len;
    cout << endl;

    for(int i = 0; i < len; i++){
      cout << "Enter a character: ";
      cin >> c;
      cout << endl;
      stck.push(c);
    }

    for(int i = 0; i < len; i++){
      c = stck.top();
      q.push(c);
      stck.pop();
    }

    while(!q.empty()){
      cout << q.front();
      q.pop();
    }

    return 0;
}
