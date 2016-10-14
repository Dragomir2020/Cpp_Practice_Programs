
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("/Users/dillondragomir/Documents/C++/lab8/lab8task1.txt");
    srand(10240);
    fout << fixed;
    fout << setprecision(2);
    fout << setw(8);
    for(int i=1;i<=1280;i++)
    {
    fout << (rand()%260 + 310)/100.00 << setw(8);
    if(i%7==0)
    {
        fout << endl;
    }
    }
    fout.close();
    return 0;
}
