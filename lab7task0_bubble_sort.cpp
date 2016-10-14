#include <iostream>
#include <vector>
using namespace std;
vector<double> bubble_sort(vector<double> Vec)
{
    int Size = Vec.size(),Count=1;
    double Middle;
    while(Count==1)
    {
    Count = 0;
    for(int i=0;i<Size-1;i++)
    {
        if(Vec[i+1]<Vec[i])
           {
           Middle = Vec[i+1];
           Vec[i+1] = Vec[i];
           Vec[i] = Middle;
           Count = 1;
           }
        }
    }
return (Vec);
}
