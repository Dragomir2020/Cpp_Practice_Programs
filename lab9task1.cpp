
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
        ifstream fin;
        fin.open("/Users/dillondragomir/Documents/C++/lab9task0.txt");
        vector<string> Sorted;
        string line, Word;
        while (getline(fin,line))
        {
        Word = line.substr(0,27);
        for (int i = Word.size()-1; i >= 0; i--)
        {
        if (Word[i] != ' ') break;
        else Word.erase(Word.end()-1);
        }
        Sorted.push_back(Word);
        }
        sort(Sorted.begin(),Sorted.end());
        for (int i = 0;i<=Sorted.size();i++)
        {
            cout << Sorted[i];
        }
    return 0;
}
