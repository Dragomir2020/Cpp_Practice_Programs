#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int Prime)
{
    bool Output;
    if(Prime!=1)
    {
        int Divisor;
        int Remainder=1;
        Divisor = floor(sqrt(Prime));
            while(Divisor>1 && Remainder!=0)
            {
                Remainder = Prime%Divisor;
                Divisor = Divisor - 1;
            }
        if(Remainder==0)
        {
            Output = 0;
        }
        else
        {
            Output = 1;
        }
            return Output;
    }
    return Output=0;
}
