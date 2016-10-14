
#include <iostream>
#include <vector>

using namespace std;

double find_median(vector<double> Foo)
{
    int Size = Foo.size();
    double Median=0;
    int Count=1;
    double Middle;
    while(Count==1)
    {
    Count = 0;
    for(int i=0;i<Size;i++)
    {
        if(Foo[i+1]<Foo[i])
           {
           Middle = Foo[i+1];
           Foo[i+1] = Foo[i];
           Foo[i] = Middle;
           Count = 1;
           }
        }
    }
    if(Size%2==0)
    {
    Median = (Foo[Size/2]+Foo[(Size/2)+1])/2.0;
    }
    if(Size%2==1)
    {
    Median = Foo[(Size/2)+1];
    }
    return Median;
}
