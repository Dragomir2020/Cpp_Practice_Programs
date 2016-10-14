
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
vector<double> bubble_sort(vector<double>);
int main()
{
    cout << "Input the vector size: " << endl;
    int X;
    cin >> X;
    srand(time(0));
    cout.precision(6);
    cout << fixed;
    vector<double> Sort(X);
    cout << "Original vector:" << endl;
    for(int i=0;i<X;i++)
    {
        Sort[i] = (rand()%1600000+100000)/1000000.0;
        cout << Sort[i] << "   ";
    }
    vector<double> Foo;
    Foo = bubble_sort(Sort);
    cout << "\nSorted vector: " << endl;
    for(int i=0;i<X;i++)
    {
    cout << Foo[i] << "   ";
    }
    return 0;
}
