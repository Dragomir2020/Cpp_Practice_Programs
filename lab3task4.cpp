
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   for(int x=1;x<1000;x++)
       {
            for(int y=1;y<1000;y++)
           {
               for(int z=1;z<1000;z++)
               {
                   if (y<x)
                   {
                       if((x*x)+(y*y)==(z*z))
                       {
                           cout << "x: " << x << setw(12);
                           cout << "y: " << y << setw(12);
                           cout << "z: " << z << setw(12) << endl;
                        }
                   }

               }
           }
       }
}
