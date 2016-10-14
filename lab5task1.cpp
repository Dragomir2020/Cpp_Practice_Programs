#include <random>
#include <iostream>
#include <ctime>

using namespace std;
int add_Integers(int Q, int P);

int main()
{
    srand(time(0));
    for(int i=1;i<=20;i++)
    {
    int Q = rand()%9 + 1;
    int P = rand()%9 + 1;
    int Sum = add_Integers(Q,P);
    cout << "1st parameter: " << Q;
    cout << "   2nd parameter: " << P;
    cout << "   Sum: " << Sum << endl;
    }
    return 0;
}


