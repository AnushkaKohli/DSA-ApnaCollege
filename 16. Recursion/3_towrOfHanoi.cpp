// Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:
// 1) Only one disk can be moved at a time.
// 2) Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
// 3) No disk may be placed on top of a smaller disk.
// Idea: move all the n-1 tiles to helper, and then place the remaining tile to dest and then place those n-1 tiles back from helper to dest.

#include <iostream>
using namespace std;

void towerOfHanoi(int numOfDisks, char src, char dest, char helper)
{
    if (numOfDisks == 0)
        return;
}

int main()
{

    return 0;
}