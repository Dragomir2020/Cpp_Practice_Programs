
#include <iostream>
using namespace std;
int drop_second(int Number)
{
    int Original;
    int Last_Digit;
    int Drop;
    //Retrive Last digit
    Original = Number;
    Drop = (Number/10)*10;
    Last_Digit = Original - Drop;
    Drop = ((Original/100)*10)+Last_Digit;
    return Drop;
}
int main()
{
    int Number;
    cout << "Enter an integer: ";
    cin >> Number;
    int Dropped;
    Dropped = drop_second(Number);
    cout << Dropped << endl;;
    return 0;
}
