
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

int main()
{
    int X;
    cout << "Input a positive integer: " << endl;
    cin >> X;
    if(isPrime(X)==1)
    {
        cout << X << " is a prime number." << endl;
    }
    else if(isPrime(X)==0)
    {
        cout << X << " is not a prime number." << endl;
    }
    return 0;
}
