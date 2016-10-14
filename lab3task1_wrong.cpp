// MH1402 Lab 3 Task 1 The wrong code
// This program prints out the even integers from 2 to 100 (including 2 and 100).

#include <iostream>
using namespace std;

int main()
{
    int counter = 2;
    do
    {
        cout << counter << endl;
        counter += 2;
    }
    while (counter <= 100);

    return 0;
}
