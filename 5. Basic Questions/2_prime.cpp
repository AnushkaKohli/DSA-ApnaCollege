#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    bool flag = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << num << " is not a prime number." << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << num << " is a prime number." << endl;
    return 0;
}