#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void moveDisk(int numDisks, int src, int dest, int temp)
{
    if (numDisks == 1){
        cout << "Move Disk#" << numDisks << " from Tower#" << src << " to Tower# " << dest << endl;
    } else {
        moveDisk(numDisks - 1, src, temp, dest);
        cout << "Move Disk#" << numDisks << " from Tower#" << src << " to Tower# " << dest << endl;
        moveDisk(numDisks - 1, temp, dest, src);
        
    }
}



int main()
{
  int numDisks;


  cout << "Enter number of disks:" << endl;
  cin >> numDisks;

  // call move disks
    moveDisk(numDisks, 1, 3, 2);

}
