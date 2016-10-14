
#include <iostream>;

using namespace std;

int main ()
{
    int x = 3, y = 8, w = 5, r;
     x = y % x; // a percent symbol is the remainder operator and determines the remainder after division
     // the value of x is 2
     w *= ++x + y--;
     /* The value of x is added +1 +1 twice and then the value of y is added to the new value of x, which is
     5 + 8 = 13 and then -1 -1 is subtracted from 13 since there are two negative signs after the y variable.
     The new value is 11 which is multiplied by w, which is 5 to give total value of 55.
     w is equal to 55 */
     r *= --x + y++;
     // a value is never set to r, so when it is multiplied by the right side an arbitrary number is outputed
     // r is equal to 294903
    cout << "x = " << x << endl << "w = " << w << endl << "r = " << r << endl;
    return 0;
}
