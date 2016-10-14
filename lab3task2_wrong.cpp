/*
    MH1402 Lab 3 task 2
*/
#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int i = 0;
    for (; i < 5; i++)
    {
        x += 3;
    }

    cout << "The value of x is: " << x << endl;
    cout << "The value of i is "  << i  << endl;

    return 0;
}
