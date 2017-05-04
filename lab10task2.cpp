// Lab 10 Task 2.

#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex x,y,z;

    x.setdata(1.2,2.3);  //set x as 1.2 + 2.3i
    y.setdata(3.4,4.5);  //set y as 3.4 + 4.5i

    //print out the value of x
    cout << "The value of x is: ";
    x.print_complex();
    cout << endl;

    //print out the value of y
    cout << "The value of y is: ";
    y.print_complex();
    cout << endl;

    //add y and x, i.e., z = x+y)
    z = x.add_complex(y);
    //print out the value of x
    cout << "The sum of x and y is: ";
    z.print_complex();
    cout << endl;

}

