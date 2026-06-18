#include <iostream>
using namespace std;

int main() {
    // Variables
    string name = "Me";
    cout << "My name is " << name << "\n";

    // Multiple variables
    int a = 6;
    int b = 7;
    double c = 8.5;
    cout << a + b << endl;
    cout << b + c << endl;

    // Constants
    const int numOfDays = 7;
    cout << "This num will not change as it is a constant: " << numOfDays << endl;

    return 0;
}