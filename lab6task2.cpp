#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
vector<int> merge_vector(vector<int> v0, vector<int> v1);

int main()
{
    vector<int> Merge;
    vector<int> vec0(2);
    vector<int> vec1(3);
    vector<int> vec2(7);
    int Time = time(0);
    cout << "The elements of vector 0:" << endl;
        for (int i=0;i<2;i++)
    {
        srand(Time + i);
        vec0[i] = rand()%13 + 2;
        cout << vec0[i] << endl;
    }
    cout << "The elements of vector 1:" << endl;
        for (int i=0;i<3;i++)
    {
        srand(Time + i + 2);
        vec1[i] = (rand()%13+ 2);
        cout << vec1[i] << endl;
    }
    cout << "The elements of vector 2:" << endl;
        for (int i=0;i<7;i++)
    {
        srand(Time + i + 5);
        vec2[i] = (rand()%13 + 2);
        cout << vec2[i] << endl;
    }
    cout << "The elements of the vector after merging vector 0 and vector 1:" << endl;
    int length1=vec0.size();
    int length2=vec1.size();
    Merge = merge_vector(vec0,vec1);
    for(int i=0;i<length1+length2;i++)
    {
        cout << Merge[i] << endl;
    }
        cout << "The elements of the vector after merging vector 2 and vector 1:" << endl;
    length1=vec2.size();
    length2=vec1.size();
    Merge = merge_vector(vec2,vec1);
    for(int i=0;i<length1+length2;i++)
    {
        cout << Merge[i] << endl;
    }

    return 0;
}
