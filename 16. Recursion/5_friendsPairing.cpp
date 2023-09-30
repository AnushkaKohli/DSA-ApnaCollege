// Friends pairing problem - Find the number of ways in which n friends can remain single or can be paired up.

#include <iostream>
using namespace std;

int friendsPairing(int numOfFriends)
{
    if (numOfFriends == 0 || numOfFriends == 1 || numOfFriends == 2)
        return numOfFriends;
    return (friendsPairing(numOfFriends - 1) + (numOfFriends - 1) * friendsPairing(numOfFriends - 2));
}

int main()
{
    int numOfFriends;
    cout << "Enter the number of friends: ";
    cin >> numOfFriends;
    cout << "Number of ways in which " << numOfFriends << " friends can remain single or can be paired up: " << friendsPairing(numOfFriends) << endl;
    return 0;
}