#include <iostream>;
using namespace std;

int main()
{
    double C;
    double F;
    cout << "Enter temperature is degrees celcius: ";
    cin >> C;
    F=9.0/5.0;
    F *= C;
    F += 32;
    cout << "Fahrenheit: " << F << endl;
    return 0;
}
