
#include <iostream>

using namespace std;

int main(){
    //Reference Temperature;
    double First = 1931;
    double& Second = First;
    cout << "First: " << First << endl << "Second: " << Second << endl;
    cout << "What is value of second Value? " << endl;
    cin >> Second;
    cout << "First: " << First << endl << "Second: " << Second << endl << endl;;
    cout << "The second value changes along with first value and vice versa." << endl << endl;;
    cout << "This is important when dealing with scope and possible values that cannot be accesed." << endl;
return 0;
}
