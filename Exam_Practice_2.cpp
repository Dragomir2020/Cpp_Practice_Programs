
#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cout << "Input 2 odd numbers: ";
    cin >> x >> y;
    for(int i=1;i<=y;i++)
    {

    if(i%((y/2)+1)==0)
    {
        for(int i = 0;i<x;i++)
        {
            cout << "O";
        }
        cout << endl;
    }

    else
    {
    for(int i=1;i<=x;i++)
    {
        if(i%((x/2)+1)==0)
        {
            cout << "O";
        }
        else
        {
           cout << "X";
        }
    }
    cout << endl;
    }

    }



    return 0;
}
