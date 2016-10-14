#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

double compute_mean(vector<double> Vector)
{
    int Length = Vector.size();
    double Sum=0,Mean=0;
    if (Length==0)
    {
        cout << "N/A \nThe mean does not exist"<< endl;
        exit(1);
    }
    else
    {
        for(int i=0;i<Length;i++)
        {
            Sum=Sum+Vector[i];
        }
        Mean = Sum/Length;
        return Mean;
    }


}
