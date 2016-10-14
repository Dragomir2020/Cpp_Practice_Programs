
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    vector<double> Numbers;
    ifstream fin;
    fin.open("/Users/dillondragomir/Documents/C++/lab8task0.txt");
    double X;
    while(fin >> X)
    {
        Numbers.push_back(X);
    }
    fin.close();
    double Sum=0,Mean=0;
    for(int i=0;i < Numbers.size();i++)
    {
        Sum = Sum + Numbers[i];
    }
    cout << fixed;
    cout << setprecision(2);
    Mean = Sum/Numbers.size();
    cout << "Sum: " << Sum << endl;
    cout << "Mean: " << Mean << endl;
    return 0;
}
