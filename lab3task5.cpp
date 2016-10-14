
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double Squareroot, Square,X, Previous_Squareroot,Count;
    cout << "Enter a positive integer: " << endl;
    cin >> X;
    Squareroot = X/2;
    Previous_Squareroot = 0;
    Count = 0;
        while (abs(Previous_Squareroot-Squareroot)>(1e-009) || abs(Previous_Squareroot-Squareroot)>(X*1e-008))
        {
        Count = Count + 1;
        Previous_Squareroot = Squareroot;
        Squareroot = ((Squareroot+X/Squareroot)/2);
        }
    Square = Squareroot*Squareroot;
    cout << "The value of square root: " << Squareroot << endl;
    cout << "The square of square root: " << Square << endl;
    cout << "The number of iterations required for the computation: " << Count << endl;
    }
