#include <iostream>
using namespace std;

int getBit(int number, int position)
{
    // get bit means get the bit at given position
    int numToBeCompared = 1 << position;
    return ((number & numToBeCompared) != 0);
}

int setBit(int number, int position)
{
    // set bit means set the bit to be 1 at given position
    int mask = 1 << position;
    return (number | mask);
}

int clearBit(int number, int position)
{
    // clear bit means set the bit to be 0 at given position
    int mask = 1 << position;
    int onesComplement = ~(mask);
    return (number & onesComplement);
}

int updateBit(int number, int position, int value)
{
    // value is the value with which the number is to be updated at position position
    // 1. clear the bit at position
    int mask = ~(1 << position);
    number = number & mask;
    // 2. set the bit at position
    int mask2 = (value << position);
    return (number | mask2);
}

int main()
{
    int number = 5, position = 1; // 5 = 0101
    cout << "Bit at position " << position << " is " << getBit(number, position) << endl;
    cout << "Number after setting bit at position " << position << " is " << setBit(number, position) << endl;
    cout << "Number after clearing bit at position " << position << " is " << clearBit(number, position) << endl;
    cout << "Number after updating bit at position " << position << " is " << updateBit(number, position, 1) << endl;
    return 0;
}