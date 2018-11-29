#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int lookup(int data[], int key, int left, int right)
{
    // input is exhausted
    if (left > right) {
        return (-1);
    }
    
    int mid = (left+right)/2;
    if (data[mid] == key) { //Eureka!
        return(mid);
    } else if (key < data[mid]) { // search left
        return lookup(data, key, left, mid-1);
    } else { // search right
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

    cout << "index = " << result << endl;

}
