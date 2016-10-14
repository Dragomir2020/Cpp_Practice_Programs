
#include <iostream>
using namespace std;

int main()
{
    int X = 0, Count = 0;
    while(X<=0)
    {
        cout << "Input a positive number: ";
        cin >> X;
    }
        for(; X > 0; X = X + 1)
        {
            Count = Count + 1;
        }
        cout << "The value of X is: " << X << endl;
        cout << "X is increased by " << Count << " times." << endl;
    return 0;
}
