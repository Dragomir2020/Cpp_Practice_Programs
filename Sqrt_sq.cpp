

#include <iostream>
#include <cmath>
#include <iomanip> //setpercision

using namespace std;

int main()
{
    double X;
    double Sqrt,Sq,Diff;
    cout << "Input a real number: ";
    cin >> X;
    Sqrt = sqrt(X);
    Sq = Sqrt*Sqrt;
    Diff = Sq-X;
    cout << setprecision(17) << "The square root is: " << Sqrt << endl;
    cout << setprecision(17) <<"The square of it's square root is: " << Sq << endl;
    cout << setprecision(17) <<"The difference is: " << Diff << endl;
    return 0;
}
