
#include <iostream>
using namespace std;

int main(){
    int n = 44;
    int& rn = n; // rn is a synonym for n
    cout << "&n: " << &n << endl << "&rn: " << &rn << endl;
    int& rn2 = rn;
    int& rn3 = rn2;
    cout << "&rn2: " << &rn2 << endl << "&rn3: " << &rn3 << endl;
    // notice they all have the same hexidecimal codes.
return 0;
}
