#include <iostream>
#include <ctime>
using namespace std;

int findMax(int Array[], int Length);

int main()
{
    int X = 10;
    int Random[10];
    cout << "The random array elements are: " << endl;
    srand(time(0));
    for(int i=0;i<10;i++)
    {
        Random[i] = rand()%100;
        cout << "  " << Random[i];
    }
    cout << "\nThe largest value is: " << findMax(Random,X) << endl;
    return 0;
}
