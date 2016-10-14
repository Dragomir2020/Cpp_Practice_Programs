
#include <iostream>

using namespace std;

bool isPrime(int Prime);

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
