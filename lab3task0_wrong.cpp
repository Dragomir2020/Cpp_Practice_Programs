// MH1402 Lab 3 Task 0 The wrong code
// This program prints out the first 10 positive integers.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x = 1;
    while (x <= 10)
    {
        cout << setw(4) << x;
        x++;
    }
        return 0;
    }


