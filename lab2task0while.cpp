

#include <iostream>
using namespace std;

int main()
{
    int count = 1, x = 7;
    while (x*count<=120)
    {
        cout << "  " << x*count;
        count = count + 1;
    }
            cout << endl;
    return 0;
}
