
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    int Iteration = 0;
    string Word = "Go";
    while (Word != "Quit" && Word != "quit" )
    {
    cout << "Enter a Malay word or enter quit to terminate: " << endl;
    getline(cin,Word); // make sure cin does not precede getline withough cin.ignore();
        if (Word!= "Quit" && Word!= "quit")
        {
            ifstream fin;
            fin.open("/Users/dillondragomir/Documents/C++/lab9task1.txt");

        string line, Definition;
        while (getline(fin,line))
        {
            Iteration = Iteration + 1;
        Definition = line.substr(0,27);
        for (int i = Definition.size()-1; i >= 0; i--)
        {
            if (Definition[i] != ' ') break;
            else Definition.erase(Definition.end()-1);
        }
        string Output = line.substr(27,100);

            if(Word.compare(Definition) == 0)
            {
                cout << "The meaning is: ";
                cout << Output << endl;
                cout << "The number of accesses: " << Iteration << endl << endl;
                Iteration = 0;
                break;
            }
           else if (Iteration == 2007)
            {
                cout << "Malay word cannot be found in the dictionary.\n" << endl;
                Iteration = 0;
                break;
            }
        }
            fin.close();
        }
    }
    return 0;
}
