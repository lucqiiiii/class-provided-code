#include <cstdlib>
#include <iostream>
#include <string>
#include "arrayStack.h"

using namespace std;

int main()
{

  arrayStack<int> intStack;
  arrayStack<string> stringStack;

  cout << "Push 10 elements" << endl;
  for (int i=0; i<10; i++){
    cout << "Inserted: " << i << endl;
    intStack.push(i);
  }

  cout << "POP all elements" << endl;
  while (!intStack.empty()){
    int i = intStack.top();
    cout << "Popped: " << i << endl;
    intStack.pop();
  }

  cout << "STRING Stack Test" << endl;

  cout << "Push AAA" << endl;
  stringStack.push("AAA");
  cout << "Push BBB" << endl;
  stringStack.push("BBB");
  cout << "Push CCC" << endl;
  stringStack.push("CCC");
  cout << "Push DDD" << endl;
  stringStack.push("DDD");
  cout << "Push EEE" << endl;
  stringStack.push("EEE");
  cout << "Push FFF" << endl;
  stringStack.push("FFF");

  cout << "POP all elements" << endl;
  while (!stringStack.empty()){
    string s = stringStack.top();
    cout << "Popped: " << s << endl;
    stringStack.pop();
  }
 
}
