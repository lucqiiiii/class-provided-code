#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


int moveDisk(int numDisks, int src, int dest, int temp, int recursion_level)
{
  int countMoves = 0;
  if (numDisks == 1) {
    for (int i = 0; i < recursion_level; i++) cout << " ";
    cout << "Move Disk#" << numDisks << " from Tower #" << src << " to Tower #" << dest << endl;
    return 1;
  } else {
    countMoves = moveDisk(numDisks - 1, src, temp, dest, recursion_level + 1);
    for (int i = 0; i < recursion_level; i++) cout << " ";
    cout << "Move Disk#" << numDisks << " from Tower #" << src << " to Tower #" << dest << endl;
    countMoves++;
    countMoves = countMoves + moveDisk(numDisks - 1, temp, dest, src, recursion_level + 1);
    return countMoves;
  }
}



int main()
{
  int numDisks;
  int numMoves;

  cout << "Enter number of disks:" << endl;
  cin >> numDisks;

  numMoves = moveDisk(numDisks, 1, 3, 2, 0);

  cout << "*********** Number of Moves = " << numMoves << " ****************" << endl;
}
