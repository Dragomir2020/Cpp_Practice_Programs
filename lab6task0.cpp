
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

double compute_mean(vector<double> Vector);

int main()
{
    double Answer;
    int Size;
    cout << "Enter a vector size: ";
    cin >> Size;
    cout << "Elements of the vecter are: " << endl;
    int Time = time(0);
    vector<double> Coo(Size);
    cout.precision(2);
    cout << fixed;
    for (int i=0;i<Size;i++)
    {
        srand(Time + i);
        Coo[i] = (rand()%201 + 300)/100.0;
        cout << Coo[i] << endl;
    }
    Answer = compute_mean(Coo);
    cout << "The mean of the elements is: " << Answer << endl;
    return 0;
}
