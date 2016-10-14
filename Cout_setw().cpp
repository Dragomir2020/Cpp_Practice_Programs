#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x,y,z;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    cout << setw(10) << left << x;
    cout << setw(12) << right << y;
    cout << setw(14) << right << z << endl;
    return 0;
}
