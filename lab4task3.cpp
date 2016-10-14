
#include <iostream>

using namespace std;

void sortTwoNumbers(double& X, double& Y)
{
    if(Y>X)
    {
        double Z;
        Z=X;
        X=Y;
        Y=Z;
    }

}

int main()
{
    double X,Y;
    cout << "Input two numbers." << endl;
    cin >> X >> Y;
    cout << "The numbers after sorting are" << endl;
    sortTwoNumbers(X,Y);
    cout << X << "   " << Y<< endl;
    return 0;
}
