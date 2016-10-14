#include <iostream>
#include <vector>
#include  <string>
using namespace std;

int main()
{
    string Convert;
    cout << "Input the string: " << endl;
    getline(cin,Convert);
    int Size = Convert.size();
    int ascChar;
    char Character;
    for(int i=0;i<Size;i++)
    {
        ascChar = Convert[i];
        if(ascChar>=97 && ascChar <=122)
        {
            //Capital letter
            ascChar = ascChar -32;
            Character = ascChar;
            Convert[i] = Character;
        }
        else if(ascChar>=65 && ascChar<=90)
        {
            //Capital letter
            ascChar = ascChar + 32;
            Character = ascChar;
            Convert[i] = Character;
        }

    }
        cout << "The string after modification: " << endl;
        cout << Convert << endl;
    return 0;
}
