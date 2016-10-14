
#include <iostream>
using namespace std;

 int findMax(int Array[], int Length)
 {
     int Max = -99;
     for(int Loop = 0; Loop < Length; Loop = Loop + 1)
     {
         if(Array[Loop] > Max)
         {
                Max = Array[Loop];
         }
     }
     return Max;
 }

