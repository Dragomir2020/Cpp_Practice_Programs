
#include <iostream>
using namespace std;

int generate_integer(int M, int N)
{
    int Integer=0;
    for(int i=1;i<=M;i++)
    {
        Integer = N + (Integer*10);

    }

    return Integer;
}

int add_Integers(int P, int Q)
{
    int Sum = 0;
    for(int i=1;i<=P;i++)
    {
        Sum = generate_integer(i,Q) + Sum;
    }
return Sum;
}
