#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool charCheck(string s){
  stack<char> stck;

  for(int i = 0; i < s.length(); i++){
    if (s[i] == '{' || s[i] == '(' || s[i] == '['){
      stck.push(s[i]);
    }
    else if(s[i] == '}' && stck.top() == '{'){
      stck.pop();
    }
    else if(s[i] == ')' && stck.top() == '('){
      stck.pop();
    }
    else if(s[i] == ']' && stck.top() == '['){
      stck.pop();
    }
  }
  if(stck.empty()){
    return true;
  }
  else{
    return false;
  }
}
int main()
{
    string s;

    cout << "Enter a string of brackets: ";
    cin >> s;
    cout << endl;

    if(charCheck(s)){
      cout << "True" << endl;
    }
    else{
      cout << "False" << endl;
    }
    return 0;
}
