
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int Print1 = 0, Print2 = 0, Print3 = 0, Count = 1, Div_3 = 3, Div_5 = 5, Div_7 = 7;

    while (Count<100)
    {
        Print1 = Count%Div_3;
        Print2 = Count%Div_5;
        Print3 = Count%Div_7;

            if(Print1 ==0 || Print2 == 0 || Print3 == 0) //No remainder and number is divisible by 3 or 5 or 7
            {
                //Print out Numbers
                cout << setw(4) << Count;
            }
    Count = Count + 1;
    }
    cout << endl;
    return 0;
}

