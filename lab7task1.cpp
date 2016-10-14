
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;
double find_median(vector<double> Foo);
int main()
{
    cout << "Input the vector size: " << endl;
    int X;
    cin >> X;
    srand(time(0));
    vector<double> Bar(X);
    cout << "Original vector:" << endl;
    cout.precision(6);
    cout << fixed;
    for(int i=0;i<X;i++)
    {
        Bar[i] = (rand()%800000)/1000000.0;
        cout << Bar[i] << "   ";
    }
    cout << "\nThe median of the vector: ";
    double Median = find_median(Bar);
    cout << Median << endl;
     return 0;
}
