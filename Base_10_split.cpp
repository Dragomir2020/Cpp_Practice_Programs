
#include <iostream>

using namespace std;

int main()
{
    int x,first,second,third;
    cout << "Input three-digit integer: ";
    cin >> x;
    first = x/100;
    second = x%100;
    second = second/10;
    third = x % 10;
    cout << "   " << first << "   " << second << "   " << third << endl;
    return 0;
}
