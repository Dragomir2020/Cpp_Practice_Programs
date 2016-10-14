

#include <iostream>
using namespace std;

int main()
{
    for (int count = 1, x = 7; x*count<=120 ; count = count + 1)
    {
        cout << "  " << x*count;
    }
            cout << endl;
    return 0;
}
