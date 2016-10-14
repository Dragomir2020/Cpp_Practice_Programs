
#include <iostream>

using namespace std;

int main ()
{
    char Y;
    int A,B,C,D,E,F,G,H;
    cout << "Input a character: ";
    cin >> Y;
    cout << "It's integer value is: " << int(Y) << endl;
    // need to convert ascci to binary format
    H=Y%2;
    G=(Y/2)%2;
    F=(Y/4)%2;
    E=(Y/8)%2;
    D=(Y/16)%2;
    C=(Y/32)%2;
    B=(Y/64)%2;
    A=(Y/128)%2;
    cout << "It's binary format is: " << A << B << C << D << E << F << G << H << endl;
    return 0;
}
