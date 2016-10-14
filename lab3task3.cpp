
#include <iostream>

using namespace std;

int main()
{
    int X, Remainder;
    cout << "Enter a positive integer: " << endl;
    cin >> X;
    Remainder = X%3;
        switch(Remainder)
        {
        case(0):
        cout << "Group 1" << endl;
        break;
        case(1):
        cout << "Group 2" << endl;
        break;
        case(2):
        cout << "Group 3" << endl;
        break;
        }
    return 0;
}
