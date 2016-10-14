#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

void replace_string(string& str, string str0, string str1);
int main()
{
    string Document;
    ifstream fin;
    fin.open("/Users/dillondragomir/Documents/C++/lab8/lab8task2.txt");
    char X;
    while(fin >> X)
    {
        Document.push_back(X);
    }
    fin.close();
    string Old = "ung";
    string New = "in";
    replace_string(Document,Old,New);
    ofstream fout;
    fout.open("/Users/dillondragomir/Documents/C++/lab8/lab8task2_corrected.txt");
    for(int i=0;i<Document.size();i++)
    {
    fout << Document[i];
    }
    fout.close();
    return 0;
}
