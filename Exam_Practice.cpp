
#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
#include <ctime>
using namespace std;

string fsubstr(string str, int pos, int len)
{
    string New;
    if(pos>str.size()||len<=0)
    {
        return New;
    }
    else if((pos+len)>str.size())
    {
        int Count = 0;
        for(int i=pos-1;i<str.size();i++)
        {
            New[Count] = str[i];
            Count = Count + 1;
        }
        return New;
    }

}



int main()
{
string Input;
cout << "Enter a String: ";
cin >> Input;
int Position;
cout << "Enter a Position: ";
cin >> Position;
int Length;
cout << "Enter Length: ";
cin >> Length;
string Output;
Output = fsubstr(Input,Position,Length);
for(int i=0;i<Output.size();i++)
{
    cout << Output[i];
}
cout << endl;
return 0;
}
