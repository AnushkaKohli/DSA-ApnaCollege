// Print all prime numbers between a and b

#include <iostream>
using namespace std;

int main()
{
    int startNum, endNum;
    cout << "Enter the starting and ending numbers: " << endl;
    cin >> startNum >> endNum;

    if (startNum > endNum)
        cout << "Invalid input\n";

    else
    {
        for (int num = startNum; num <= endNum; num++)
        {
            int div;
            for (div = 2; div < num; div++)
            {
                if (num % div == 0)
                    // getting out of the inner loop
                    break;
            }
            if (div == num)
                cout << num << " is prime" << endl;
        }
    }
    return 0;
}