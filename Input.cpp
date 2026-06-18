#include <iostream>
using namespace std;

int main() {
    // Input
    cout << "Here is how to input \n";
    
    string name;
    cout << "What is your name? Please enter it: \t";
    cin >> name;
    cout << "Your name is " << name << "\n";


    // Simple Calculator
    int a, b;
    cout << "Enter a number below: \n" << "x: ";
    cin >> a;
    cout << "Enter another number below: \n" << "y: ";
    cin >> b;
    cout << "The sum of x and y is: " << a + b << "\n";

    return 0;
}