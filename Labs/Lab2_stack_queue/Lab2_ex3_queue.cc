#include <iostream>
#include <string>
#include <queue>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    string line;
    infile.open("words.txt");
    queue<string> queue;
    int size = 42;
    // int counter = 0;
    for(int i = 0; i < size; i++){
      getline(infile,line);
      queue.push(line);
      // counter ++;
    }
    while(!infile.eof()){
      if(line.empty()){
        cout << "Found an empty line!!" << endl;
        // << " " << "should be at line " << counter << endl;
        cout << queue.front() << endl;
        queue.pop();
        // << " " << "should be at line " << counter - 42 << endl;
      }
      getline(infile,line);
      queue.push(line);
      // else{
      //   cout << "No line empty." << endl;
      //   // << " " << "should be at line " << counter << endl;
      // }
    }
      infile.close();

    return 0;
}
