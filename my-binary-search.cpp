#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


int lookup(int data[], int key, int left, int right)
{
  int mid;

  // check if there is something left for lookup
  if (left > right){
    return -1;
  }

  mid = (left + right)/2;
  if (data[mid] == key) {
    return mid;
  } else if (data[mid] > key) {// lookup in the left side
    return lookup(data, key, left, mid-1);
  } else { // data[mid] < key ==> lookup in the right side
    return lookup(data, key, mid+1, right);
  }
}



int main()
{
  int data[1000];
  int key;
  int result;
  
  // initialize the sorted array
  for (int i=0; i < 1000; i++) {
    data[i] = i*10;
  }

  cout << "Enter the key to search:" << endl;
  cin >> key;

  result = lookup(data, key, 0, 999);

  if (result < 0) {
    cout << key << " not found!" <<endl;
  } else {
    cout << key << " found at position " << result << endl;
  }
}
