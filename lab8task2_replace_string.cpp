#include <iostream>
#include <vector>
#include <string>
using namespace std;
void replace_string(string& str, string str0, string str1)
{
    int pos = 0;
  while((pos = str.find(str0, pos)) != string::npos)
    {
    int Length = str0.length();
     str.replace(pos, Length, str1);
     pos += str1.length();
  }

}
