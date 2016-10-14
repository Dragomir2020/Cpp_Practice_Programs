
#include <iostream>

using namespace std;

double compute_average(double X, double Y, double Z)
{
    double Average;
    Average = (X+Y+Z)/3;
    return Average;
}

int main()
{
    double One, Two, Three;
    cout << "Enter three numbers: " << endl;
    cin >> One >> Two >> Three;
    cout << "Average: " << compute_average(One,Two,Three) << endl;
    return 0;
}
