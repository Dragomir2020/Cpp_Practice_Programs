#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> merge_vector(vector<int> v0, vector<int> v1)
{
    vector<int> Merged_Vector(10);
    int v0_Size = v0.size();
    int v1_Size = v1.size();
    //Determine case to apply algorithm of merging
    //Case 1 V0 is bigger
    if(v1_Size>v0_Size)
    {
        for(int i=0;i<v0_Size;i++)
        {
            Merged_Vector[2*i] = v0[i];
            Merged_Vector[2*i+1] = v1[i];
        }
        for(int i=0;i<v1_Size;i++)
        {
            Merged_Vector[2*v0_Size+i] = v1[v0_Size+i];
        }
    }
    //Case 2 V1 is bigger
    else if(v0_Size>v1_Size)
    {
        for(int i=0;i<v1_Size;i++)
        {
            Merged_Vector[2*i] = v0[i];
            Merged_Vector[2*i+1] = v1[i];
        }
        for(int i=0;i<v0_Size;i++)
        {
            Merged_Vector[2*v1_Size+i] = v0[v1_Size+i];
        }
    }
    //Case 3 Same Size
    else
    {
        for(int i=0;i<v0_Size;i++)
        {
            Merged_Vector[2*i] = v0[i];
            Merged_Vector[2*i+1] = v1[i];
        }
    }
    return (Merged_Vector);
}

