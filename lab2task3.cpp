
#include <iostream>
using namespace std;

int main()
{
    int N, M, Even1, Even2, Circle1, Circle2;
    cout << "Enter two odd integers between 3 and 15: " << endl;
    cin >> N >> M;
    Even1 = N%2;
    Even2 = M%2;
    Circle1 = N/2;
    Circle2 = M/2;
    if (Even1 == 0 || Even2 == 0 || N > 15 || N < 3 || M > 15 || M < 3 )
        {
        //One or both of the numbers is not odd
        cout << "Both numbers entered are not odd or between 3 and 15." << endl;
        }
    else
    {
        for(int X = 1; X <= N ; X = X + 1)
        {
            if(X == Circle1 + 1)
                {
                    for(int Count = 1; Count <= M; Count = Count + 1)
                        cout << "O";
                }
            else
                {
                    for(int Y = 1; Y <= M ; Y = Y + 1)
                    {
                        if(Y == Circle2 + 1)
                        {
                            cout << "O";
                        }
                        else
                        {
                            cout << "X";
                        }
                }
        }
    cout << "\n";
    }
return 0;
}

}
